/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 02f160b4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) goto LAB_02f16334;
  uVar10 = *(uint *)(lVar4 + 0x18);
  iVar14 = 0;
  if (uVar10 != 0) {
    iVar14 = param_1 / (int)uVar10;
  }
  uVar13 = param_1 - iVar14 * uVar10;
  if (uVar13 < uVar10) {
    lVar12 = *(long *)(unaff_x20 + 0x18);
    uVar10 = *(int *)(lVar4 + (long)(int)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar10) {
      if (lVar12 == 0) goto LAB_02f16334;
      uVar5 = *(undefined8 *)(lVar12 + 0x18);
      iVar14 = 0;
      do {
        uVar11 = (ulong)uVar10;
        if ((uint)uVar5 <= uVar10) goto LAB_02f162f4;
        if (*(int *)(lVar12 + uVar11 * 0x10 + 0x20) == param_1) {
          plVar9 = *(long **)(unaff_x20 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_02f16334;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          uVar5 = *(undefined8 *)(lVar12 + uVar11 * 0x10 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01dde7f8(lVar4);
          }
          lVar6 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02f1618c;
              }
              uVar8 = uVar8 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_01dde8fc(plVar9,lVar4,0);
LAB_02f1618c:
          uVar8 = (*(code *)*puVar2)(plVar9,uVar5);
          if ((uVar8 & 1) != 0) {
            uVar5 = 0;
            goto LAB_02f162cc;
          }
          uVar5 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar5 <= iVar14) {
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar5 = thunk_FUN_01de27b8();
          uVar3 = thunk_FUN_01dd295c(StringLiteral_3086);
          FUN_03393770(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar5);
        }
        if ((uint)uVar5 <= uVar10) goto LAB_02f162f4;
        uVar10 = *(uint *)(lVar12 + uVar11 * 0x10 + 0x24);
        iVar14 = iVar14 + 1;
      } while (-1 < (int)uVar10);
    }
    uVar10 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar10 < 0) {
      if (lVar12 == 0) goto LAB_02f16334;
      uVar10 = *(uint *)(unaff_x20 + 0x24);
      if (uVar10 == *(uint *)(lVar12 + 0x18)) {
        FUN_02f14914();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02f16334;
        uVar10 = *(uint *)(unaff_x20 + 0x24);
        lVar12 = *(long *)(unaff_x20 + 0x18);
        iVar14 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
        if (lVar12 == 0) goto LAB_02f16334;
        iVar1 = 0;
        if (iVar14 != 0) {
          iVar1 = param_1 / iVar14;
        }
        uVar13 = param_1 - iVar1 * iVar14;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar10 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_02f16334;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_02f162f4;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar10 * 0x10 + 0x24);
    }
    if (uVar10 < *(uint *)(lVar12 + 0x18)) {
      lVar4 = lVar12 + (long)(int)uVar10 * 0x10;
      *(int *)(lVar4 + 0x20) = param_1;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x21;
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 == 0) {
LAB_02f16334:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((uVar13 < *(uint *)(lVar4 + 0x18)) && (uVar10 < *(uint *)(lVar12 + 0x18))) {
        piVar7 = (int *)(lVar4 + (long)(int)uVar13 * 4 + 0x20);
        *(int *)(lVar12 + (long)(int)uVar10 * 0x10 + 0x24) = *piVar7 + -1;
        *piVar7 = uVar10 + 1;
        uVar5 = 1;
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_02f162cc:
        *unaff_x19 = uVar10;
        return uVar5;
      }
    }
  }
LAB_02f162f4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


