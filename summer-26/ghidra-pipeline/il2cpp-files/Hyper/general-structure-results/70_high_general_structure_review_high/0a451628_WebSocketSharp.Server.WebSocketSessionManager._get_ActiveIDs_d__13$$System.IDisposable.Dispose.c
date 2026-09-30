/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__13$$System.IDisposable.Dispose
ENTRY_POINT: 0a451628
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__System_IDisposable_Dispose
              (void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  float fVar10;
  float fVar11;
  
  lVar4 = FUN_0a44b558();
  if ((lVar4 != 0) &&
     (plVar5 = (long *)FUN_0a25ffe4(lVar4,0), puVar1 = PTR_DAT_0acf1f68, plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0acf1f68) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0a451694;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0acf1f68,0);
LAB_0a451694:
    fVar10 = (float)(*(code *)*puVar6)(plVar5,unaff_w20,puVar6[1]);
    uVar7 = FUN_0a44b558();
    iVar2 = FUN_0a45114c(uVar7,unaff_w20,uVar7);
    lVar4 = FUN_0a44b558();
    if (lVar4 != 0) {
      iVar3 = FUN_0a2600c4(lVar4,0);
      iVar2 = iVar2 + 1;
      if (iVar2 < iVar3) {
        uVar7 = FUN_0a44b558();
        if (*(int *)(*(long *)PTR_DAT_0acd9078 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)PTR_DAT_0acd9078);
        }
        iVar3 = FUN_0a44fb90(uVar7,iVar2);
        lVar4 = FUN_0a44b558();
        if ((lVar4 == 0) || (plVar5 = (long *)FUN_0a260014(lVar4,0), plVar5 == (long *)0x0))
        goto LAB_0a451864;
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0acf1f60) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0a4517b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0acf1f60,0);
LAB_0a4517b0:
        iVar2 = (*(code *)*puVar6)(plVar5,iVar2,puVar6[1]);
        unaff_w20 = iVar3;
        if (iVar2 < iVar3) {
          do {
            unaff_w20 = iVar2;
            lVar4 = FUN_0a44b558();
            if ((lVar4 == 0) || (plVar5 = (long *)FUN_0a25ffe4(lVar4,0), plVar5 == (long *)0x0))
            goto LAB_0a451864;
            lVar4 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0a451834;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_04980e68(plVar5,*(long *)puVar1,0);
LAB_0a451834:
            fVar11 = (float)(*(code *)*puVar6)(plVar5,unaff_w20,puVar6[1]);
          } while ((fVar11 < fVar10) && (iVar2 = unaff_w20 + 1, unaff_w20 = iVar3, iVar2 != iVar3));
        }
      }
      else if ((unaff_x21 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_0a451864;
        unaff_w20 = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x10);
      }
      return unaff_w20;
    }
  }
LAB_0a451864:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


