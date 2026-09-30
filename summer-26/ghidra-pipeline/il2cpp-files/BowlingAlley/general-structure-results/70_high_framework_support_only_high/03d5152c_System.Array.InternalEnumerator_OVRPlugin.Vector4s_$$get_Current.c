/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 03d5152c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03d51760) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar6;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 03d51530 to 03e51537 has its CatchHandler @ 03d51538 */
    if (uVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03d514d0 with catch @ 03d51538
                       catch(type#2 @ 00000000) { ... } // from try @ 03d51514 with catch @ 03d51538
                       catch(type#2 @ 00000000) { ... } // from try @ 03d51530 with catch @ 03d51538
                        */
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          lVar2 = param_1 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_03d51570;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_032937ac();
LAB_03d51570:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 == 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      FUN_032d5cbc();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      puVar3 = (undefined8 *)thunk_FUN_032cddd4();
      plVar6 = (long *)*puVar3;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03d51750 to 03e51753 has its CatchHandler @ 03d51758 */
        FUN_032d5ee8();
      }
      uVar1 = unaff_w27 - 1;
      if (*(uint *)(plVar6 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03d51714 with catch @ 03d51754
                        */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      memcpy((void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x22,unaff_x21);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(uint *)(plVar6 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      FUN_032d5c5c(lVar2,(long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20)
      ;
    }
    unaff_w27 = unaff_w27 + 1;
    lVar2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_03d514ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
FUN_03d514ec:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_032934b8(param_3);
    }
    param_1 = *unaff_x24;
  } while( true );
  if (unaff_x24 != (long *)0x0) {
    lVar2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03d51708;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
LAB_03d51708:
    (*(code *)*puVar3)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


