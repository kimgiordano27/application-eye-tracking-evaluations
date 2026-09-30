/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 01997844
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01997904) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = unaff_x23;
  auVar6._0_8_ = unaff_x22;
code_r0x01997844:
  lVar3 = *(long *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x21 + 0x18) = in_w9 + 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  do {
    if (*(uint *)(lVar3 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    *(undefined1 (*) [16])(lVar3 + (long)(int)in_w9 * 0x10 + 0x20) = auVar6;
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01997784;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0122ea3c();
LAB_01997784:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_019978b0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_01997898;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748(lVar3);
    }
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_019977fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0122ea3c();
LAB_019977fc:
    auVar6 = (*(code *)*puVar1)();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    in_w9 = *(uint *)(unaff_x21 + 0x18);
    if (in_w9 == *(uint *)(lVar3 + 0x18)) break;
    *(uint *)(unaff_x21 + 0x18) = in_w9 + 1;
  } while( true );
  FUN_01996158();
  in_w9 = *(uint *)(unaff_x21 + 0x18);
  goto code_r0x01997844;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_01997898:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_019978cc;
    }
  }
LAB_019978b0:
  puVar1 = (undefined8 *)FUN_0122ea3c();
LAB_019978cc:
  (*(code *)*puVar1)();
  return;
}


