/*
FUNCTION_NAME: FUN_05507ec4
ENTRY_POINT: 05507ec4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_20
*/


/* WARNING: Removing unreachable block (ram,0x0550884c) */
/* WARNING: Removing unreachable block (ram,0x05508644) */

void FUN_05507ec4(long param_1,long *param_2)

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
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  
  if ((DAT_06bbf573 & 1) == 0) {
    FUN_02f08768(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVR_OpenVR_IVRSettings__SetString_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVRSettings__Sync_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVRSettings__RemoveKeyInSection_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVRSettings__RemoveSection_TypeInfo);
    DAT_06bbf573 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_055087f4;
  if (*param_2 != *(long *)OVR_OpenVR_IVRSettings__RemoveSection_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  }
  if (param_2[6] != 0) {
    FUN_0550895c(param_1,param_2);
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  lVar9 = FUN_054fb910();
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  lVar10 = FUN_054fb910(*(long *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  uVar2 = FUN_054f6fe4(*(long *)(param_1 + 0x10));
  lVar20 = *(long *)(param_1 + 0x10);
  if (param_2[5] == 0) {
    if (lVar20 == 0) goto LAB_055087f4;
    uVar12 = FUN_054ed5d4(0);
    FUN_054f6d80(lVar20,uVar12);
    lVar20 = 0;
  }
  else {
    if (lVar20 == 0) goto LAB_055087f4;
    lVar20 = FUN_054fb910(lVar20);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
    FUN_054fc044(*(long *)(param_1 + 0x10),lVar20);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  plVar11 = (long *)FUN_054f703c(*(long *)(param_1 + 0x10),uVar2);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 !=
           *(long *)System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo) {
    plVar11 = (long *)0x0;
  }
  FUN_05506338(param_1,4);
  uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  lVar22 = *(long *)(PTR_DAT_067c9338 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar13 = FUN_050e4454(lVar22 + 0x20,0);
  uVar3 = FUN_050edfb8(uVar12,uVar13,0);
  if ((uVar3 & 1) == 0) {
    FUN_05501c04(param_1,param_2[3]);
  }
  else {
    FUN_05500c08(param_1);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  uVar4 = FUN_054f6fe4();
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar10 == 0)) goto LAB_055087f4;
  FUN_054eb158(lVar10,*(long *)(param_1 + 0x10),0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fbbac(*(long *)(param_1 + 0x10),lVar9,uVar3 & 1,uVar3 & 1,uVar3 & 1);
  if (param_2[4] == 0) goto LAB_055087f4;
  iVar5 = FUN_040bc85c(param_2[4],*(undefined8 *)OVR_OpenVR_IVRSettings__RemoveKeyInSection_TypeInfo
                      );
  if (0 < iVar5) {
    lVar22 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03abf108(lVar22,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
    if (param_2[4] != 0) {
      plVar14 = (long *)FUN_040bcacc(param_2[4],*(undefined8 *)OVR_OpenVR_IVRSettings__Sync_TypeInfo
                                    );
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b8) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0550826c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b8,0);
LAB_0550826c:
        uVar18 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar18 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto LAB_05508638;
          lVar17 = *plVar14;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_055085fc;
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_055085e4;
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *plVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_055082d8;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_02f421d0(plVar14,*(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0);
LAB_055082d8:
        lVar17 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar23 = *(long *)(lVar17 + 0x10);
        if (lVar23 == 0) {
          uVar12 = *(undefined8 *)(lVar17 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar23 = FUN_054d2524(uVar12,0);
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar21 = *(long *)(param_1 + 0x18);
        uVar6 = FUN_054f6fe4();
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        auVar24 = FUN_05512e44(lVar21,lVar23,uVar6,0);
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7cdc(*(long *)(param_1 + 0x38),lVar23,*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo)
        ;
        if (*(long *)(lVar17 + 0x28) == 0) {
          lVar21 = 0;
        }
        else {
          FUN_05506338(param_1,7);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc2d8();
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar6 = FUN_054fbb50();
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar7 = FUN_054f6fe4();
          FUN_0550147c(param_1,lVar23,1);
          FUN_05500c08(param_1,*(undefined8 *)(lVar17 + 0x28));
          FUN_05501280(param_1,lVar23);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar8 = FUN_054f6fe4();
          lVar21 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
          FUN_05116b38(lVar21,0);
          lVar16 = *(long *)(param_1 + 0x10);
          *(undefined4 *)(lVar21 + 0x10) = uVar6;
          *(undefined4 *)(lVar21 + 0x14) = uVar7;
          *(undefined4 *)(lVar21 + 0x18) = uVar8;
          if (lVar16 == 0) {
LAB_055087f0:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc338();
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_055087f0;
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
        }
        FUN_05506338(param_1,5);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc3f8();
        }
        else {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc398();
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = FUN_054fbb50();
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar7 = FUN_054f6fe4();
        FUN_0550147c(param_1,lVar23,1);
        if ((uVar3 & 1) == 0) {
          FUN_05501c04(param_1,*(undefined8 *)(lVar17 + 0x20));
        }
        else {
          FUN_05500c08(param_1);
        }
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7c30(*(long *)(param_1 + 0x38),*(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_054fc458(*(long *)(param_1 + 0x10),uVar3 & 1,lVar10);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar8 = FUN_054f6fe4();
        uVar12 = *(undefined8 *)(lVar17 + 0x18);
        lVar17 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
        FUN_05116b38(lVar17,0);
        *(undefined8 *)(lVar17 + 0x10) = uVar12;
        *(undefined4 *)(lVar17 + 0x18) = uVar6;
        *(undefined4 *)(lVar17 + 0x1c) = uVar7;
        *(undefined4 *)(lVar17 + 0x20) = uVar8;
        *(long *)(lVar17 + 0x28) = lVar21;
        if (lVar22 == 0) {
LAB_055087ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar23 = *(long *)(lVar22 + 0x10);
        lVar21 = *(long *)OVRPlugin_OVRP_1_129_0_TypeInfo;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_055087ec;
        uVar1 = *(uint *)(lVar22 + 0x18);
        if (uVar1 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar1 + 1;
          *(long *)(lVar23 + (long)(int)uVar1 * 8 + 0x20) = lVar17;
        }
        else {
          FUN_03abf904(lVar22,lVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_055087ec;
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar17 = *(long *)(param_1 + 0x18);
        uVar6 = FUN_054f6fe4();
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0550dba0(lVar17,auVar24._0_8_,auVar24._8_8_,uVar6,0);
      } while( true );
    }
    goto LAB_055087f4;
  }
  if (param_2[5] == 0) goto LAB_055087f4;
  lVar22 = 0;
LAB_05508654:
  FUN_05506338(param_1,6);
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar20 == 0)) goto LAB_055087f4;
  FUN_054eb158(lVar20,*(long *)(param_1 + 0x10),0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fc110(*(long *)(param_1 + 0x10),lVar20);
  FUN_05501c04(param_1,param_2[5]);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (System_Data_Common_ObjectStorage__VerifyIDynamicMetaObjectProvider(),
     *(long *)(param_1 + 0x10) == 0)) goto LAB_055087f4;
  uVar6 = *(undefined4 *)(lVar20 + 0x10);
  uVar7 = *(undefined4 *)(lVar10 + 0x10);
  uVar8 = FUN_054f6fe4();
  if (lVar22 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_03ac12f8(lVar22,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
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
  lVar20 = *(long *)(param_1 + 0x30);
  plVar11[3] = lVar10;
  if (lVar20 == 0) goto LAB_055087f4;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar20 + 0x20);
  goto LAB_05508734;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_055085e4:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0550862c;
    }
  }
LAB_055085fc:
  puVar15 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b0,0);
LAB_0550862c:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_05508638:
  if (param_2[5] != 0) goto LAB_05508654;
  if (lVar22 == 0) goto LAB_055087f4;
  uVar6 = *(undefined4 *)(lVar10 + 0x10);
  uVar12 = FUN_03ac12f8(lVar22,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
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
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar9 != 0)) {
    FUN_054eb158(lVar9,*(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
      return;
    }
  }
LAB_055087f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


