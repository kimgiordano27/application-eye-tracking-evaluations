/*
FUNCTION_NAME: FUN_05e5abbc
ENTRY_POINT: 05e5abbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e5abbc(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_64;
  
  if ((DAT_066dc61b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_141__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_06313c10);
    FUN_02b3c81c(PTR_DAT_0631eb50);
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
    DAT_066dc61b = 1;
  }
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_141__;
  local_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (param_2 <= param_3) {
      lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
      plVar18 = (long *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
      plVar19 = (long *)PTR_DAT_0631eb50;
      if (lVar17 == 0) goto LAB_05e5b458;
      do {
        lVar8 = FUN_037a6268(lVar17,param_2,*(undefined8 *)puVar6);
        if (lVar8 == 0) goto LAB_05e5b458;
        switch(*(undefined2 *)(lVar8 + 0x10)) {
        case 0:
          lVar11 = *plVar19;
          *(undefined4 *)(param_1 + 0xf4) = 0;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar11 = *plVar19;
          }
          uVar7 = **(undefined4 **)(lVar11 + 0xb8);
          goto LAB_05e5aef0;
        case 1:
          lVar11 = *plVar19;
          plVar12 = *(long **)(lVar8 + 0x38);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar11 = *plVar19;
          }
          local_64 = **(uint **)(lVar11 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar9 = FUN_05c8c45c(plVar12,0,0);
          if ((uVar9 & 1) == 0) {
            *(undefined4 *)(param_1 + 0xf4) = 0;
          }
          else {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e5b458;
            plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x110);
            if (plVar10 == (long *)0x0) {
LAB_05e5b3b8:
              lVar11 = *plVar18;
              *(undefined4 *)(param_1 + 0xf4) = 2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (DAT_066dbc9a == '\0') {
                FUN_02b3c81c(plVar18);
                DAT_066dbc9a = '\x01';
              }
              lVar11 = *plVar18;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar11 = *plVar18;
              }
              if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_05e5b458;
              local_64 = FUN_05f50e44(**(long **)(lVar11 + 0xb8),plVar12,0);
              lVar11 = *(long *)(param_1 + 0x18);
              if (lVar11 == 0) goto LAB_05e5b458;
              uVar14 = *(undefined8 *)(param_1 + 0x20);
              uVar15 = 0;
            }
            else {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_05e5b458;
              if (plVar12 == (long *)0x0) {
                plVar16 = (long *)0x0;
              }
              else {
                plVar16 = plVar12;
                if (*plVar12 != *(long *)PTR_DAT_06313c10) {
                  plVar16 = (long *)0x0;
                }
              }
              uVar9 = (**(code **)(*plVar10 + 0x178))
                                (plVar10,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),plVar16,
                                 &local_64,&local_80,*(undefined8 *)(*plVar10 + 0x180));
              if ((uVar9 & 1) == 0) goto LAB_05e5b3b8;
              auVar20._8_8_ = uStack_78;
              auVar20._0_8_ = local_80;
              lVar11 = *(long *)(param_1 + 0x18);
              *(undefined4 *)(param_1 + 0xf4) = 3;
              auVar20 = NEON_scvtf(auVar20,4);
              *(undefined1 *)(param_1 + 0xf8) = 1;
              *(long *)(param_1 + 0x104) = auVar20._8_8_;
              *(long *)(param_1 + 0xfc) = auVar20._0_8_;
              if (lVar11 == 0) goto LAB_05e5b458;
              uVar14 = *(undefined8 *)(param_1 + 0x20);
              uVar15 = 1;
            }
            FUN_05e78180(lVar11,uVar14,plVar12,local_64,uVar15,0);
          }
          FUN_05e5b5cc(param_1,lVar8,local_64);
          *(undefined1 *)(param_1 + 0xf8) = 0;
          break;
        case 2:
          lVar11 = *plVar18;
          *(undefined4 *)(param_1 + 0xf4) = 2;
          goto LAB_05e5addc;
        case 3:
          *(undefined4 *)(param_1 + 0xf4) = 2;
          uVar7 = *(undefined4 *)(lVar8 + 0x60);
          goto LAB_05e5aef0;
        case 4:
          lVar11 = *plVar18;
          *(undefined4 *)(param_1 + 0xf4) = 1;
LAB_05e5addc:
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066dbc9a == '\0') {
            FUN_02b3c81c(plVar18);
            DAT_066dbc9a = '\x01';
          }
          lVar11 = *plVar18;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar11 = *plVar18;
          }
          if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_05e5b458;
          uVar7 = FUN_05f50e44(**(long **)(lVar11 + 0xb8),*(undefined8 *)(lVar8 + 0x38),0);
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e5b458;
          FUN_05e78180(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(lVar8 + 0x38),uVar7,0,0);
LAB_05e5aef0:
          FUN_05e5b5cc(param_1,lVar8,uVar7);
          break;
        case 5:
          *(undefined4 *)(param_1 + 0xf4) = 4;
          if ((((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
              (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x118), lVar11 == 0)) ||
             (lVar11 = FUN_05e7e3b4(lVar11,*(undefined8 *)(lVar8 + 0x48),
                                    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),0),
             lVar11 == 0)) goto LAB_05e5b458;
          lVar13 = *plVar19;
          *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(lVar11 + 0x1c);
          iVar1 = *(int *)(lVar11 + 0x38);
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar13 = *plVar19;
          }
          puVar5 = PTR_DAT_0631eb50;
          iVar2 = **(int **)(lVar13 + 0xb8);
          if (DAT_066dc62d == '\0') {
            FUN_02b3c81c(PTR_DAT_0631eb50);
            lVar13 = *(long *)puVar5;
            DAT_066dc62d = '\x01';
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          plVar18 = (long *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
          plVar19 = (long *)PTR_DAT_0631eb50;
          if (iVar1 == iVar2) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__ +
                        0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066dbc9a == '\0') {
              FUN_02b3c81c(plVar18);
              DAT_066dbc9a = '\x01';
            }
            lVar11 = *plVar18;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar11 = *plVar18;
            }
            if ((*(long *)(lVar8 + 0x48) == 0) || (**(long **)(lVar11 + 0xb8) == 0))
            goto LAB_05e5b458;
            uVar7 = FUN_05f50e44(**(long **)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar8 + 0x48) + 0x20),0);
            if ((*(long *)(lVar8 + 0x48) == 0) || (*(long *)(param_1 + 0x18) == 0))
            goto LAB_05e5b458;
            FUN_05e78180(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)(*(long *)(lVar8 + 0x48) + 0x20),uVar7,0,0);
          }
          else {
            uVar7 = *(undefined4 *)(lVar11 + 0x38);
          }
          FUN_05e5b5cc(param_1,lVar8,uVar7);
          *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
          break;
        case 6:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *(undefined4 *)(lVar11 + 0x34) = 2;
            goto LAB_05e5b264;
          }
          goto LAB_05e5b458;
        case 7:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *(undefined4 *)(lVar11 + 0x34) = 1;
LAB_05e5b264:
            *(undefined8 *)(lVar11 + 0x18) = uVar14;
            thunk_FUN_02bb0e9c();
            uVar4 = *(undefined1 *)(param_1 + 0x110);
            *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(lVar8 + 0x58);
            *(undefined1 *)(lVar11 + 0x30) = uVar4;
UnityEngine_UIElements_ComputedStyle__ApplyPropertyAnimation:
            thunk_FUN_02bb0e9c();
            if (*(long *)(param_1 + 0x118) == 0) {
              *(long *)(param_1 + 0x118) = lVar11;
              plVar12 = (long *)(param_1 + 0x118);
            }
            else {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(param_1 + 0x120);
              thunk_FUN_02bb0e9c();
              if (*(long *)(param_1 + 0x120) == 0) goto LAB_05e5b458;
              plVar12 = (long *)(*(long *)(param_1 + 0x120) + 0x28);
              *plVar12 = lVar11;
            }
            thunk_FUN_02bb0e9c(plVar12,lVar11);
            *(long *)(param_1 + 0x120) = lVar11;
            goto LAB_05e5b310;
          }
          goto LAB_05e5b458;
        case 8:
        case 0x15:
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(0,0);
          break;
        case 9:
          iVar1 = *(int *)(param_1 + 0x28);
          iVar2 = *(int *)(param_1 + 0x2c);
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(iVar1 == iVar2,0);
          FUN_05c45700(*(char *)(param_1 + 0x58) == '\0',0);
          *(undefined1 *)(param_1 + 0x58) = 1;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
          FUN_05c45700(*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x3c),0);
          plVar18 = (long *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
          break;
        case 10:
          cVar3 = *(char *)(param_1 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(cVar3 != '\0',0);
          *(undefined1 *)(param_1 + 0x58) = 0;
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
          plVar18 = (long *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
          break;
        case 0xb:
          iVar1 = *(int *)(param_1 + 0x28);
          iVar2 = *(int *)(param_1 + 0x34);
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(iVar1 == iVar2 + 1,0);
          FUN_05e5bc84(param_1);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
          plVar18 = (long *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
          break;
        case 0xc:
          uVar14 = *(undefined8 *)(param_1 + 0x50);
          goto LAB_05e5affc;
        case 0xd:
          uVar14 = *(undefined8 *)(param_1 + 0x48);
LAB_05e5affc:
          *(undefined8 *)(param_1 + 0x40) = uVar14;
          break;
        case 0xe:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            uVar7 = 5;
            goto LAB_05e5b028;
          }
          goto LAB_05e5b458;
        case 0xf:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            uVar7 = 6;
            goto LAB_05e5b028;
          }
          goto LAB_05e5b458;
        case 0x10:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            uVar7 = 3;
            goto LAB_05e5b028;
          }
          goto LAB_05e5b458;
        case 0x11:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            uVar7 = 4;
            goto LAB_05e5b028;
          }
          goto LAB_05e5b458;
        case 0x12:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            *(undefined4 *)(lVar11 + 0x34) = 7;
            *(undefined8 *)(lVar11 + 0x18) = uVar14;
            thunk_FUN_02bb0e9c();
            uVar4 = *(undefined1 *)(param_1 + 0x110);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar8 + 0x50);
            *(undefined1 *)(lVar11 + 0x30) = uVar4;
            goto UnityEngine_UIElements_ComputedStyle__ApplyPropertyAnimation;
          }
          goto LAB_05e5b458;
        case 0x13:
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            uVar14 = *(undefined8 *)(param_1 + 0x20);
            uVar7 = 8;
            goto LAB_05e5b028;
          }
          goto LAB_05e5b458;
        case 0x14:
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar11 = FUN_05e77464(*(long *)(param_1 + 0x18),0), lVar11 == 0)) goto LAB_05e5b458;
          uVar14 = *(undefined8 *)(param_1 + 0x20);
          uVar7 = 0xb;
LAB_05e5b028:
          *(undefined8 *)(lVar11 + 0x18) = uVar14;
          *(undefined4 *)(lVar11 + 0x34) = uVar7;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x18));
          lVar8 = *(long *)(param_1 + 0x118);
          *(undefined1 *)(lVar11 + 0x30) = *(undefined1 *)(param_1 + 0x110);
          if (lVar8 == 0) {
            *(long *)(param_1 + 0x118) = lVar11;
            plVar12 = (long *)(param_1 + 0x118);
          }
          else {
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(param_1 + 0x120);
            thunk_FUN_02bb0e9c();
            if (*(long *)(param_1 + 0x120) == 0) goto LAB_05e5b458;
            plVar12 = (long *)(*(long *)(param_1 + 0x120) + 0x28);
            *plVar12 = lVar11;
          }
          thunk_FUN_02bb0e9c(plVar12,lVar11);
          *(long *)(param_1 + 0x120) = lVar11;
LAB_05e5b310:
          thunk_FUN_02bb0e9c(param_1 + 0x120,lVar11);
          break;
        default:
          thunk_FUN_02ba3594(PTR_DAT_06320888);
          uVar14 = thunk_FUN_02b79644();
          FUN_04d7db04(uVar14,0);
          uVar15 = thunk_FUN_02ba3594(Method_OVRPlugin_<>c_<_cctor>b__810_142__);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar14,uVar15);
        }
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
    return;
  }
LAB_05e5b458:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


