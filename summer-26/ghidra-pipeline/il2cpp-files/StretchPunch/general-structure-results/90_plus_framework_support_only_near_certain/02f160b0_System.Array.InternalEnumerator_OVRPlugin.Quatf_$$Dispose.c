/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 02f160b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Quatf>__Dispose(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  
  iVar2 = FUN_02f16a9c();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_02f16334;
  uVar11 = *(uint *)(lVar5 + 0x18);
  iVar15 = 0;
  if (uVar11 != 0) {
    iVar15 = iVar2 / (int)uVar11;
  }
  uVar14 = iVar2 - iVar15 * uVar11;
  if (uVar14 < uVar11) {
    lVar13 = *(long *)(unaff_x20 + 0x18);
    uVar11 = *(int *)(lVar5 + (long)(int)uVar14 * 4 + 0x20) - 1;
    if (-1 < (int)uVar11) {
      if (lVar13 == 0) goto LAB_02f16334;
      uVar6 = *(undefined8 *)(lVar13 + 0x18);
      iVar15 = 0;
      do {
        uVar12 = (ulong)uVar11;
        if ((uint)uVar6 <= uVar11) goto LAB_02f162f4;
        if (*(int *)(lVar13 + uVar12 * 0x10 + 0x20) == iVar2) {
          plVar10 = *(long **)(unaff_x20 + 0x30);
          if (plVar10 == (long *)0x0) goto LAB_02f16334;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
          uVar6 = *(undefined8 *)(lVar13 + uVar12 * 0x10 + 0x28);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_02f1618c;
              }
              uVar9 = uVar9 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar10,lVar5,0);
LAB_02f1618c:
          uVar9 = (*(code *)*puVar3)(plVar10,uVar6);
          if ((uVar9 & 1) != 0) {
            uVar6 = 0;
            goto LAB_02f162cc;
          }
          uVar6 = *(undefined8 *)(lVar13 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar15) {
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar6 = thunk_FUN_01de27b8();
          uVar4 = thunk_FUN_01dd295c(StringLiteral_3086);
          FUN_03393770(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar6);
        }
        if ((uint)uVar6 <= uVar11) goto LAB_02f162f4;
        uVar11 = *(uint *)(lVar13 + uVar12 * 0x10 + 0x24);
        iVar15 = iVar15 + 1;
      } while (-1 < (int)uVar11);
    }
    uVar11 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar11 < 0) {
      if (lVar13 == 0) goto LAB_02f16334;
      uVar11 = *(uint *)(unaff_x20 + 0x24);
      if (uVar11 == *(uint *)(lVar13 + 0x18)) {
        FUN_02f14914();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02f16334;
        uVar11 = *(uint *)(unaff_x20 + 0x24);
        lVar13 = *(long *)(unaff_x20 + 0x18);
        iVar15 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
        if (lVar13 == 0) goto LAB_02f16334;
        iVar1 = 0;
        if (iVar15 != 0) {
          iVar1 = iVar2 / iVar15;
        }
        uVar14 = iVar2 - iVar1 * iVar15;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
      }
    }
    else {
      if (lVar13 == 0) goto LAB_02f16334;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_02f162f4;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(lVar13 + (ulong)uVar11 * 0x10 + 0x24);
    }
    if (uVar11 < *(uint *)(lVar13 + 0x18)) {
      lVar5 = lVar13 + (long)(int)uVar11 * 0x10;
      *(int *)(lVar5 + 0x20) = iVar2;
      *(undefined8 *)(lVar5 + 0x28) = unaff_x21;
      lVar5 = *(long *)(unaff_x20 + 0x10);
      if (lVar5 == 0) {
LAB_02f16334:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((uVar14 < *(uint *)(lVar5 + 0x18)) && (uVar11 < *(uint *)(lVar13 + 0x18))) {
        piVar8 = (int *)(lVar5 + (long)(int)uVar14 * 4 + 0x20);
        *(int *)(lVar13 + (long)(int)uVar11 * 0x10 + 0x24) = *piVar8 + -1;
        *piVar8 = uVar11 + 1;
        uVar6 = 1;
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_02f162cc:
        *unaff_x19 = uVar11;
        return uVar6;
      }
    }
  }
LAB_02f162f4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


