/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSurfacePositionDebugger
ENTRY_POINT: 06df0a5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSurfacePositionDebugger(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined8 *unaff_x21;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  (**(code **)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138))();
  plVar6 = (long *)*unaff_x21;
  uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91b88);
  FUN_04f12e94();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_06df0b00;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,3);
LAB_06df0b00:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  plVar6 = (long *)*unaff_x21;
  uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6eab8);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            ();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_06df0b94;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,5);
LAB_06df0b94:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  plVar6 = (long *)*unaff_x21;
  uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91b98);
  FUN_04cee708();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_06df0c28;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,7);
LAB_06df0c28:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  plVar6 = (long *)*unaff_x21;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
        goto LAB_06df0c90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,9);
LAB_06df0c90:
  lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_071787d8(lVar3,0);
    uVar4 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04527644(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      FUN_0701d29c(&stack0x00000008,0);
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


