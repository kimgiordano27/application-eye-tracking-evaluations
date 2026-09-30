/*
FUNCTION_NAME: System.Data.Common.DecimalStorage$$ConvertObjectToXml
ENTRY_POINT: 05507fcc
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

void System_Data_Common_DecimalStorage__ConvertObjectToXml(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *unaff_x23;
  undefined1 auVar23 [16];
  
  if (unaff_x23 == (long *)0x0) goto LAB_055087f4;
  if (*unaff_x23 != *(long *)OVR_OpenVR_IVRSettings__RemoveSection_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  if (unaff_x23[6] != 0) {
    FUN_0550895c();
    return;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  lVar9 = FUN_054fb910();
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  lVar10 = FUN_054fb910(*(long *)(unaff_x19 + 0x10));
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  uVar2 = FUN_054f6fe4(*(long *)(unaff_x19 + 0x10));
  lVar19 = *(long *)(unaff_x19 + 0x10);
  if (unaff_x23[5] == 0) {
    if (lVar19 == 0) goto LAB_055087f4;
    uVar12 = FUN_054ed5d4(0);
    FUN_054f6d80(lVar19,uVar12);
    lVar19 = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_055087f4;
    lVar19 = FUN_054fb910(lVar19);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
    FUN_054fc044(*(long *)(unaff_x19 + 0x10),lVar19);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  plVar11 = (long *)FUN_054f703c(*(long *)(unaff_x19 + 0x10),uVar2);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 !=
           *(long *)System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo) {
    plVar11 = (long *)0x0;
  }
  FUN_05506338();
  uVar12 = (**(code **)(*unaff_x23 + 0x188))();
  lVar21 = *(long *)(PTR_DAT_067c9338 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar13 = FUN_050e4454(lVar21 + 0x20,0);
  uVar3 = FUN_050edfb8(uVar12,uVar13,0);
  if ((uVar3 & 1) == 0) {
    FUN_05501c04();
  }
  else {
    FUN_05500c08();
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  uVar4 = FUN_054f6fe4();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (lVar10 == 0)) goto LAB_055087f4;
  FUN_054eb158(lVar10,*(long *)(unaff_x19 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fbbac(*(long *)(unaff_x19 + 0x10),lVar9,uVar3 & 1,uVar3 & 1,uVar3 & 1);
  if (unaff_x23[4] == 0) goto LAB_055087f4;
  iVar5 = FUN_040bc85c(unaff_x23[4],
                       *(undefined8 *)OVR_OpenVR_IVRSettings__RemoveKeyInSection_TypeInfo);
  if (0 < iVar5) {
    lVar21 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03abf108(lVar21,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
    if (unaff_x23[4] != 0) {
      plVar14 = (long *)FUN_040bcacc(unaff_x23[4],
                                     *(undefined8 *)OVR_OpenVR_IVRSettings__Sync_TypeInfo);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b8) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0550826c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b8,0);
LAB_0550826c:
        uVar17 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto LAB_05508638;
          lVar16 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 == 0) goto LAB_055085fc;
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_055085e4;
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_055082d8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_02f421d0(plVar14,*(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0);
LAB_055082d8:
        lVar16 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar22 = *(long *)(lVar16 + 0x10);
        if (lVar22 == 0) {
          uVar12 = *(undefined8 *)(lVar16 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar22 = FUN_054d2524(uVar12,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar20 = *(long *)(unaff_x19 + 0x18);
        uVar6 = FUN_054f6fe4();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        auVar23 = FUN_05512e44(lVar20,lVar22,uVar6,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7cdc(*(long *)(unaff_x19 + 0x38),lVar22,
                     *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
        if (*(long *)(lVar16 + 0x28) == 0) {
          lVar22 = 0;
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
          uVar6 = FUN_054fbb50();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar7 = FUN_054f6fe4();
          FUN_0550147c();
          FUN_05500c08();
          FUN_05501280();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar8 = FUN_054f6fe4();
          lVar22 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
          FUN_05116b38(lVar22,0);
          lVar20 = *(long *)(unaff_x19 + 0x10);
          *(undefined4 *)(lVar22 + 0x10) = uVar6;
          *(undefined4 *)(lVar22 + 0x14) = uVar7;
          *(undefined4 *)(lVar22 + 0x18) = uVar8;
          if (lVar20 == 0) {
LAB_055087f0:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc338();
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087f0;
          *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        }
        FUN_05506338();
        if ((uVar3 & 1) == 0) {
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
        uVar6 = FUN_054fbb50();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar7 = FUN_054f6fe4();
        FUN_0550147c();
        if ((uVar3 & 1) == 0) {
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
        FUN_054fc458(*(long *)(unaff_x19 + 0x10),uVar3 & 1,lVar10);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar8 = FUN_054f6fe4();
        uVar12 = *(undefined8 *)(lVar16 + 0x18);
        lVar16 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
        FUN_05116b38(lVar16,0);
        *(undefined8 *)(lVar16 + 0x10) = uVar12;
        *(undefined4 *)(lVar16 + 0x18) = uVar6;
        *(undefined4 *)(lVar16 + 0x1c) = uVar7;
        *(undefined4 *)(lVar16 + 0x20) = uVar8;
        *(long *)(lVar16 + 0x28) = lVar22;
        if (lVar21 == 0) {
LAB_055087ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar22 = *(long *)(lVar21 + 0x10);
        lVar20 = *(long *)OVRPlugin_OVRP_1_129_0_TypeInfo;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_055087ec;
        uVar1 = *(uint *)(lVar21 + 0x18);
        if (uVar1 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar1 + 1;
          *(long *)(lVar22 + (long)(int)uVar1 * 8 + 0x20) = lVar16;
        }
        else {
          FUN_03abf904(lVar21,lVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087ec;
        *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *(long *)(unaff_x19 + 0x18);
        uVar6 = FUN_054f6fe4();
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0550dba0(lVar16,auVar23._0_8_,auVar23._8_8_,uVar6,0);
      } while( true );
    }
    goto LAB_055087f4;
  }
  if (unaff_x23[5] == 0) goto LAB_055087f4;
  lVar21 = 0;
LAB_05508654:
  FUN_05506338();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (lVar19 == 0)) goto LAB_055087f4;
  FUN_054eb158(lVar19,*(long *)(unaff_x19 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fc110(*(long *)(unaff_x19 + 0x10),lVar19);
  FUN_05501c04();
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (System_Data_Common_ObjectStorage__VerifyIDynamicMetaObjectProvider(),
     *(long *)(unaff_x19 + 0x10) == 0)) goto LAB_055087f4;
  uVar6 = *(undefined4 *)(lVar19 + 0x10);
  uVar7 = *(undefined4 *)(lVar10 + 0x10);
  uVar8 = FUN_054f6fe4();
  if (lVar21 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_03ac12f8(lVar21,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  }
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar10,0);
  *(undefined4 *)(lVar10 + 0x18) = uVar6;
  *(undefined4 *)(lVar10 + 0x1c) = uVar8;
  *(undefined4 *)(lVar10 + 0x20) = uVar7;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  if (plVar11 == (long *)0x0) goto LAB_055087f4;
  lVar19 = *(long *)(unaff_x19 + 0x30);
  plVar11[3] = lVar10;
  if (lVar19 == 0) goto LAB_055087f4;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar19 + 0x20);
  goto LAB_05508734;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_055085e4:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0550862c;
    }
  }
LAB_055085fc:
  puVar15 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b0,0);
LAB_0550862c:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_05508638:
  if (unaff_x23[5] != 0) goto LAB_05508654;
  if (lVar21 == 0) goto LAB_055087f4;
  uVar6 = *(undefined4 *)(lVar10 + 0x10);
  uVar12 = FUN_03ac12f8(lVar21,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar10,0);
  *(undefined4 *)(lVar10 + 0x20) = uVar6;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined8 *)(lVar10 + 0x18) = 0x7fffffff7fffffff;
  if (plVar11 == (long *)0x0) goto LAB_055087f4;
  plVar11[3] = lVar10;
LAB_05508734:
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (lVar9 != 0)) {
    FUN_054eb158(lVar9,*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
      return;
    }
  }
LAB_055087f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


