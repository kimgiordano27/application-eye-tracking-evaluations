/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 04d4db78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  undefined *puVar1;
  bool in_CY;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long *plVar10;
  uint unaff_w27;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar8 = PTR_DAT_06313aa0;
  if (in_CY) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar3 = thunk_FUN_02b79644();
    puVar8 = PTR_DAT_06332150;
  }
  else {
    if ((unaff_w27 & 0xffffffef) < 8) {
      if (*(int *)(*(long *)PTR_DAT_06313aa0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_04c0ed98();
      if (iVar2 == -1) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar3 = FUN_04d4e1ec();
        uVar4 = FUN_04d3e188(uVar3,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = thunk_FUN_02ba3594(PTR_DAT_06329540);
          uVar3 = FUN_04bec328(uVar3,0);
          uVar6 = FUN_04d4e868();
          uVar3 = FUN_04c00984(uVar3,uVar6,0);
          thunk_FUN_02ba3594(PTR_DAT_063294f8);
          uVar6 = thunk_FUN_02b79644();
          FUN_04d99b4c(uVar6,uVar3,0);
LAB_04d4e110:
          uVar3 = thunk_FUN_02ba3594(PTR_DAT_063328b8);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,uVar3);
        }
        if ((unaff_w20 != 6) || ((unaff_w22 & 1) == 0)) {
          if ((unaff_w22 < 2) && (1 < unaff_w20 - 3U)) {
            uVar3 = thunk_FUN_02ba3594(PTR_DAT_06332898);
            uVar3 = FUN_04bec328(uVar3,0);
            uStack0000000000000008 = unaff_w22;
            uVar6 = thunk_FUN_02ba3594(PTR_DAT_063328a0);
            uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar6,&stack0x00000008);
            uVar9 = thunk_FUN_02ba3594(PTR_DAT_063328a8);
            uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar9,&stack0x00000004);
            uVar3 = FUN_04c0af28(uVar3,uVar6,uVar9,0);
            thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
            uVar6 = thunk_FUN_02b79644();
            FUN_04cf4a4c(uVar6,uVar3,0);
            goto LAB_04d4e110;
          }
          FUN_04c2f59c(0);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar5 = FUN_04d4e910(uVar3);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (0 < *(int *)(lVar5 + 0x10)) {
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar6 = FUN_04d4ec88(lVar5);
            uVar4 = FUN_04d3e188(uVar6,0);
            if ((uVar4 & 1) == 0) {
              uVar6 = thunk_FUN_02ba3594(PTR_DAT_063328b0);
              uVar6 = FUN_04bec328(uVar6,0);
              if ((unaff_x24 & 1) == 0) {
                lVar5 = thunk_FUN_02ba3594(PTR_DAT_06313aa0);
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                lVar5 = FUN_04d4ec88(uVar3);
              }
              uVar3 = FUN_04c00984(uVar6,lVar5,0);
              thunk_FUN_02ba3594(PTR_DAT_063294e8);
              uVar6 = thunk_FUN_02b79644();
              FUN_04d338cc(uVar6,uVar3,0);
              goto LAB_04d4e110;
            }
          }
          puVar8 = PTR_DAT_06329c90;
          if ((unaff_x24 & 1) == 0) {
            *unaff_x25 = uVar3;
            thunk_FUN_02bb0e9c();
          }
          puVar1 = PTR_DAT_0632aaf8;
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar5 = FUN_04d4ecf0(uVar3,unaff_w20,unaff_w22,unaff_w27 & 0xffffffef,unaff_w23,
                               (long)&stack0x00000008 + 4);
          if (lVar5 != **(long **)(*(long *)puVar8 + 0xb8)) {
            lVar7 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06332848);
            FUN_04c06ac8(lVar7,lVar5,0,0);
            plVar10 = unaff_x19 + 7;
            *plVar10 = lVar7;
            thunk_FUN_02bb0e9c(plVar10,lVar7);
            lVar5 = *(long *)puVar8;
            lVar7 = *plVar10;
            *(uint *)(unaff_x19 + 10) = unaff_w22;
            iVar2 = *(int *)(lVar5 + 0xe4);
            *(undefined1 *)((long)unaff_x19 + 0x54) = 1;
            if (iVar2 == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar2 = FUN_04d4f518(lVar7,(long)&stack0x00000008 + 4);
            *(bool *)((long)unaff_x19 + 0x56) = iVar2 == 1;
            *(byte *)((long)unaff_x19 + 0x55) = iVar2 == 1 & (byte)((uint)unaff_w23 >> 0x1e);
            if (((unaff_w22 == 1) && (unaff_w21 == 0x1000)) && (iVar2 == 1)) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              (**(code **)(*unaff_x19 + 0x1e8))();
            }
            FUN_04d4f64c();
            if (unaff_w20 == 6) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              (**(code **)(*unaff_x19 + 0x328))();
              lVar5 = (**(code **)(*unaff_x19 + 0x1f8))();
            }
            else {
              lVar5 = 0;
            }
            unaff_x19[9] = lVar5;
            return;
          }
          uVar3 = FUN_04d4ed8c();
          thunk_FUN_02ba3594(PTR_DAT_06329c90);
          FUN_0275e12c();
          uVar3 = FUN_04d4ee10(uVar3,uStack000000000000000c);
          goto LAB_04d4e16c;
        }
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar3 = thunk_FUN_02b79644();
        puVar8 = PTR_DAT_06332890;
      }
      else {
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar3 = thunk_FUN_02b79644();
        puVar8 = PTR_DAT_06332888;
      }
      uVar6 = thunk_FUN_02ba3594(puVar8);
      FUN_04cf4a4c(uVar3,uVar6,0);
      goto LAB_04d4e16c;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar3 = thunk_FUN_02b79644();
    puVar8 = PTR_DAT_06332880;
  }
  uVar6 = thunk_FUN_02ba3594(puVar8);
  uVar9 = thunk_FUN_02ba3594(PTR_DAT_06332158);
  FUN_04cf1968(uVar3,uVar6,uVar9,0);
LAB_04d4e16c:
  uVar6 = thunk_FUN_02ba3594(PTR_DAT_063328b8);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar6);
}


