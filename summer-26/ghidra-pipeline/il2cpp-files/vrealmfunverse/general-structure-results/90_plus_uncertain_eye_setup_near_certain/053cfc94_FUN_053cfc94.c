/*
FUNCTION_NAME: FUN_053cfc94
ENTRY_POINT: 053cfc94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_053cfc94(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  byte local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  if ((DAT_066d09b8 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_116_0_TypeInfo);
    DAT_066d09b8 = 1;
  }
  local_38 = 0;
  uVar2 = FUN_053db608(param_2,&local_38,0);
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 == 0) {
    if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaInfo__get_HasDefaultValue;
    if (local_38 == 0) goto LAB_053d0050;
    uVar6 = 0;
    if (*(char *)(local_38 + 0x22) == '\0') goto LAB_053d0038;
  }
  else {
    if ((uVar2 & 1) != 0) {
      if (local_38 == 0) goto LAB_053d0050;
      if (*(char *)(local_38 + 0x23) != '\0') {
        uVar2 = System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName(lVar7,0);
        if ((uVar2 & 1) == 0) {
          if (local_38 == 0) goto LAB_053d0050;
          uVar6 = 0;
          if (*(char *)(local_38 + 0x22) == '\0') goto LAB_053d0038;
        }
        else {
          if (local_38 == 0) goto LAB_053d0050;
          if (*(char *)(local_38 + 0x22) != '\0') goto LAB_053cfd60;
        }
        plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        lVar7 = FUN_053d6158(param_2,0);
        if (plVar3 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_053d0058;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar7;
            thunk_FUN_02bb0e9c(plVar3 + 4,lVar7);
            puVar1 = PTR_DAT_06312310;
            if (local_38 == 0) goto LAB_053d0050;
            local_3c[0] = *(undefined1 *)(local_38 + 0x22);
            lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(PTR_DAT_06312310 + 0x28),local_3c);
            if ((lVar7 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_053d0058;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = lVar7;
              thunk_FUN_02bb0e9c(plVar3 + 5,lVar7);
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_053d0050;
              uVar5 = FUN_053d7bb8(*(long *)(param_1 + 0x48),0);
              lVar7 = FUN_053d6158(uVar5,0);
              if ((lVar7 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_053d0058;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar7;
                thunk_FUN_02bb0e9c(plVar3 + 6,lVar7);
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_053d0050;
                local_40[0] = System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName
                                        (*(long *)(param_1 + 0x48),0);
                local_40[0] = local_40[0] & 1;
                lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(puVar1 + 0x28),local_40);
                if ((lVar7 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                goto LAB_053d0058;
                if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                  plVar3[7] = lVar7;
                  thunk_FUN_02bb0e9c(plVar3 + 7,lVar7);
                  uVar5 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo,plVar3,0);
                    /* WARNING: Subroutine does not return */
                  FUN_053d7134(uVar5,param_2,0);
                }
              }
            }
          }
          goto LAB_053d0054;
        }
        goto LAB_053d0050;
      }
    }
    uVar2 = System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName(lVar7,0);
    if ((uVar2 & 1) == 0) {
System_Xml_Schema_XmlSchemaInfo__get_HasDefaultValue:
      uVar6 = 0;
      goto LAB_053d0038;
    }
  }
LAB_053cfd60:
  if (param_2 != 0) {
    uVar2 = FUN_04d957a4(param_2,0);
    if ((uVar2 & 1) == 0) {
      uVar6 = 1;
LAB_053d0038:
      *(undefined1 *)(param_1 + 0x20) = uVar6;
      return;
    }
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
    lVar7 = FUN_053d6158(param_2,0);
    if (plVar3 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_053d0058:
        uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar7;
        thunk_FUN_02bb0e9c(plVar3 + 4,lVar7);
        puVar1 = PTR_DAT_06312310;
        local_44[0] = 1;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x28),local_44);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_053d0058;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar3 + 5,lVar7);
          local_48[0] = 0;
          lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar1 + 0x28),local_48);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_053d0058;
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar7;
            thunk_FUN_02bb0e9c(plVar3 + 6,lVar7);
            uVar5 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo,plVar3,0);
                    /* WARNING: Subroutine does not return */
            FUN_053d7134(uVar5,param_2,0);
          }
        }
      }
LAB_053d0054:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
LAB_053d0050:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


