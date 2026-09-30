/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 02f21700
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong uVar10;
  undefined4 unaff_w21;
  long *plVar11;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long lStack0000000000000000;
  
  if (unaff_x26 == 0) {
LAB_02f21938:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
  iVar12 = 0;
  uVar10 = 0xffffffff;
  lStack0000000000000000 = in_x9;
  do {
    if ((uint)uVar6 <= unaff_w25) goto LAB_02f218f8;
    piVar14 = (int *)(unaff_x26 + (ulong)unaff_w25 * 0xc + 0x20);
    uVar13 = (ulong)unaff_w25;
    if (*piVar14 == param_1) {
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 == (long *)0x0) goto LAB_02f21938;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
      uVar1 = *(undefined4 *)(unaff_x26 + uVar13 * 0xc + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02f217bc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01dde8fc(plVar11,lVar4,0);
LAB_02f217bc:
      uVar8 = (*(code *)*puVar2)(plVar11,uVar1,unaff_w21,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        if ((int)(uint)uVar10 < 0) {
          uVar5 = *(uint *)(unaff_x26 + 0x18);
          if (uVar5 <= unaff_w25) goto LAB_02f218f8;
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_02f21938;
          if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000000) goto LAB_02f218f8;
          *(int *)(lVar4 + lStack0000000000000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + uVar13 * 0xc + 0x24) + 1;
        }
        else {
          uVar5 = *(uint *)(unaff_x26 + 0x18);
          if ((uVar5 <= unaff_w25) || (uVar5 <= (uint)uVar10)) goto LAB_02f218f8;
          *(undefined4 *)(unaff_x26 + 0x20 + uVar10 * 0xc + 4) =
               *(undefined4 *)(unaff_x26 + 0x20 + uVar13 * 0xc + 4);
        }
        if (unaff_w25 < uVar5) {
          *piVar14 = -1;
          *(undefined4 *)(unaff_x26 + uVar13 * 0xc + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
          iVar12 = *(int *)(unaff_x19 + 0x20) + -1;
          *(int *)(unaff_x19 + 0x20) = iVar12;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          if (iVar12 == 0) {
            unaff_w25 = 0xffffffff;
            *(undefined4 *)(unaff_x19 + 0x24) = 0;
          }
          *(uint *)(unaff_x19 + 0x28) = unaff_w25;
          return 1;
        }
        goto LAB_02f218f8;
      }
      uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    }
    if ((int)(uint)uVar6 <= iVar12) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar6 = thunk_FUN_01de27b8();
      uVar3 = thunk_FUN_01dd295c(StringLiteral_3086);
      FUN_03393770(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar6,unaff_x24);
    }
    if ((uint)uVar6 <= unaff_w25) {
LAB_02f218f8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar5 = *(uint *)(unaff_x26 + uVar13 * 0xc + 0x24);
    iVar12 = iVar12 + 1;
    uVar10 = (ulong)unaff_w25;
    unaff_w25 = uVar5;
    if ((int)uVar5 < 0) {
      return 0;
    }
  } while( true );
}


