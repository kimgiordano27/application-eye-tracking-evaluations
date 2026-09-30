/*
FUNCTION_NAME: System.Data.Common.DecimalStorage$$CopyValue
ENTRY_POINT: 055080b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x0550884c) */
/* WARNING: Removing unreachable block (ram,0x05508644) */

void System_Data_Common_DecimalStorage__CopyValue(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long *unaff_x23;
  undefined4 unaff_w24;
  long unaff_x26;
  undefined1 auVar18 [16];
  
  if (param_1 == (long *)0x0) {
    param_1 = (long *)0x0;
  }
  else if (*param_1 !=
           *(long *)System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo) {
    param_1 = (long *)0x0;
  }
  FUN_05506338();
  uVar8 = (**(code **)(*unaff_x23 + 0x188))();
  lVar16 = *(long *)(PTR_DAT_067c9338 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar9 = FUN_050e4454(lVar16 + 0x20,0);
  uVar2 = FUN_050edfb8(uVar8,uVar9,0);
  if ((uVar2 & 1) == 0) {
    FUN_05501c04();
  }
  else {
    FUN_05500c08();
  }
  if ((((*(long *)(unaff_x19 + 0x10) == 0) ||
       (uVar3 = FUN_054f6fe4(), *(long *)(unaff_x19 + 0x10) == 0)) || (unaff_x26 == 0)) ||
     (FUN_054eb158(), *(long *)(unaff_x19 + 0x10) == 0)) goto LAB_055087f4;
  FUN_054fbbac();
  if (unaff_x23[4] == 0) goto LAB_055087f4;
  iVar4 = FUN_040bc85c(unaff_x23[4],
                       *(undefined8 *)OVR_OpenVR_IVRSettings__RemoveKeyInSection_TypeInfo);
  if (0 < iVar4) {
    lVar16 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03abf108(lVar16,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
    if (unaff_x23[4] != 0) {
      plVar10 = (long *)FUN_040bcacc(unaff_x23[4],
                                     *(undefined8 *)OVR_OpenVR_IVRSettings__Sync_TypeInfo);
      do {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b8) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0550826c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b8,0);
LAB_0550826c:
        uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_05508638;
          lVar12 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_055085fc;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_055085e4;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_055082d8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_02f421d0(plVar10,*(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0);
LAB_055082d8:
        lVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *(long *)(lVar12 + 0x10);
        if (lVar17 == 0) {
          uVar8 = *(undefined8 *)(lVar12 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar17 = FUN_054d2524(uVar8,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar15 = *(long *)(unaff_x19 + 0x18);
        uVar5 = FUN_054f6fe4();
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        auVar18 = FUN_05512e44(lVar15,lVar17,uVar5,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7cdc(*(long *)(unaff_x19 + 0x38),lVar17,
                     *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
        if (*(long *)(lVar12 + 0x28) == 0) {
          lVar17 = 0;
        }
        else {
          FUN_05506338();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc2d8();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar5 = FUN_054fbb50();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar6 = FUN_054f6fe4();
          FUN_0550147c();
          FUN_05500c08();
          FUN_05501280();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar7 = FUN_054f6fe4();
          lVar17 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
          FUN_05116b38(lVar17,0);
          lVar15 = *(long *)(unaff_x19 + 0x10);
          *(undefined4 *)(lVar17 + 0x10) = uVar5;
          *(undefined4 *)(lVar17 + 0x14) = uVar6;
          *(undefined4 *)(lVar17 + 0x18) = uVar7;
          if (lVar15 == 0) {
LAB_055087f0:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc338();
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087f0;
          *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        }
        FUN_05506338();
        if ((uVar2 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc3f8();
        }
        else {
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc398();
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar5 = FUN_054fbb50();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = FUN_054f6fe4();
        FUN_0550147c();
        if ((uVar2 & 1) == 0) {
          FUN_05501c04();
        }
        else {
          FUN_05500c08();
        }
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7c30(*(long *)(unaff_x19 + 0x38),*(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_054fc458(*(long *)(unaff_x19 + 0x10),uVar2 & 1,unaff_x26);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar7 = FUN_054f6fe4();
        uVar8 = *(undefined8 *)(lVar12 + 0x18);
        lVar12 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
        FUN_05116b38(lVar12,0);
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
        *(undefined4 *)(lVar12 + 0x18) = uVar5;
        *(undefined4 *)(lVar12 + 0x1c) = uVar6;
        *(undefined4 *)(lVar12 + 0x20) = uVar7;
        *(long *)(lVar12 + 0x28) = lVar17;
        if (lVar16 == 0) {
LAB_055087ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *(long *)(lVar16 + 0x10);
        lVar15 = *(long *)OVRPlugin_OVRP_1_129_0_TypeInfo;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_055087ec;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
        }
        else {
          FUN_03abf904(lVar16,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087ec;
        *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *(long *)(unaff_x19 + 0x18);
        uVar5 = FUN_054f6fe4();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0550dba0(lVar12,auVar18._0_8_,auVar18._8_8_,uVar5,0);
      } while( true );
    }
    goto LAB_055087f4;
  }
  if (unaff_x23[5] == 0) goto LAB_055087f4;
  lVar16 = 0;
LAB_05508654:
  FUN_05506338();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (unaff_x20 == 0)) goto LAB_055087f4;
  FUN_054eb158(unaff_x20,*(long *)(unaff_x19 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fc110(*(long *)(unaff_x19 + 0x10),unaff_x20);
  FUN_05501c04();
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (System_Data_Common_ObjectStorage__VerifyIDynamicMetaObjectProvider(),
     *(long *)(unaff_x19 + 0x10) == 0)) goto LAB_055087f4;
  uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar7 = FUN_054f6fe4();
  if (lVar16 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_03ac12f8(lVar16,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  }
  lVar16 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar16,0);
  *(undefined4 *)(lVar16 + 0x18) = uVar5;
  *(undefined4 *)(lVar16 + 0x1c) = uVar7;
  *(undefined4 *)(lVar16 + 0x20) = uVar6;
  *(undefined4 *)(lVar16 + 0x10) = unaff_w24;
  *(undefined4 *)(lVar16 + 0x14) = uVar3;
  *(undefined8 *)(lVar16 + 0x28) = uVar8;
  if (param_1 == (long *)0x0) goto LAB_055087f4;
  lVar12 = *(long *)(unaff_x19 + 0x30);
  param_1[3] = lVar16;
  if (lVar12 == 0) goto LAB_055087f4;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar12 + 0x20);
  goto LAB_05508734;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_055085e4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0550862c;
    }
  }
LAB_055085fc:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_0550862c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_05508638:
  if (unaff_x23[5] != 0) goto LAB_05508654;
  if (lVar16 == 0) goto LAB_055087f4;
  uVar5 = *(undefined4 *)(unaff_x26 + 0x10);
  uVar8 = FUN_03ac12f8(lVar16,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  lVar16 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar16,0);
  *(undefined4 *)(lVar16 + 0x20) = uVar5;
  *(undefined8 *)(lVar16 + 0x28) = uVar8;
  *(undefined4 *)(lVar16 + 0x10) = unaff_w24;
  *(undefined4 *)(lVar16 + 0x14) = uVar3;
  *(undefined8 *)(lVar16 + 0x18) = 0x7fffffff7fffffff;
  if (param_1 == (long *)0x0) goto LAB_055087f4;
  param_1[3] = lVar16;
LAB_05508734:
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (unaff_x22 != 0)) {
    FUN_054eb158(unaff_x22,*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
      return;
    }
  }
LAB_055087f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


