/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02b40a60
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
  code *pcVar7;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02b40ac4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02b40ac4:
  lVar2 = (*(code *)*puVar1)();
  unaff_x19[7] = lVar2;
  thunk_FUN_01656ef8(unaff_x19 + 7,lVar2);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) goto LAB_02b40cb4;
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_02b40b40;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x22,0);
FUN_02b40b40:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02b40cb4;
    }
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) goto LAB_02b40cb4;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_015c2790(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b40bc0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar6,lVar2,0);
LAB_02b40bc0:
    (*(code *)*puVar1)(&stack0x000002a0,plVar6,puVar1[1]);
    memcpy(&stack0x000003f0,&stack0x000002a0,0x150);
    lVar2 = unaff_x19[5];
    if (lVar2 == 0) break;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    pcVar7 = *(code **)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 8);
    memcpy(&stack0x00000150,&stack0x000003f0,0x150);
    uVar4 = (*pcVar7)(lVar2,&stack0x00000150,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50));
  } while ((uVar4 & 1) == 0);
  lVar2 = unaff_x19[6];
  memcpy(&stack0x000002a0,&stack0x000003f0,0x150);
  if (lVar2 != 0) {
    pcVar7 = *(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8);
    memcpy(&stack0x00000000,&stack0x000002a0,0x150);
    lVar2 = (*pcVar7)(lVar2);
    unaff_x19[3] = lVar2;
    thunk_FUN_01656ef8(unaff_x19 + 3,lVar2);
    return 1;
  }
LAB_02b40cb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


