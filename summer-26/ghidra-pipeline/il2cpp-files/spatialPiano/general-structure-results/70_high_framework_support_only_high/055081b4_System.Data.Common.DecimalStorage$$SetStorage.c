/*
FUNCTION_NAME: System.Data.Common.DecimalStorage$$SetStorage
ENTRY_POINT: 055081b4
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

void System_Data_Common_DecimalStorage__SetStorage(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x23;
  uint unaff_w27;
  undefined1 auVar15 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000030;
  
  iVar2 = FUN_040bc85c(param_2,*param_1);
  if (0 < iVar2) {
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03abf108(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
    if (*(long *)(unaff_x23 + 0x20) != 0) {
      plVar7 = (long *)FUN_040bcacc(*(long *)(unaff_x23 + 0x20),
                                    *(undefined8 *)OVR_OpenVR_IVRSettings__Sync_TypeInfo);
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c91b8) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0550826c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b8,0);
LAB_0550826c:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05508638;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_055085fc;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_055085e4;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_055082d8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02f421d0(plVar7,*(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0);
LAB_055082d8:
        lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = *(long *)(lVar9 + 0x10);
        if (lVar14 == 0) {
          uVar12 = *(undefined8 *)(lVar9 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar14 = FUN_054d2524(uVar12,0);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = *(long *)(unaff_x19 + 0x18);
        uVar3 = FUN_054f6fe4();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        auVar15 = FUN_05512e44(lVar13,lVar14,uVar3,0);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_042e7cdc(*(long *)(unaff_x19 + 0x38),lVar14,
                     *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
        if (*(long *)(lVar9 + 0x28) == 0) {
          lVar14 = 0;
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
          uVar3 = FUN_054fbb50();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar4 = FUN_054f6fe4();
          FUN_0550147c();
          FUN_05500c08();
          FUN_05501280();
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar5 = FUN_054f6fe4();
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
          FUN_05116b38(lVar14,0);
          lVar13 = *(long *)(unaff_x19 + 0x10);
          *(undefined4 *)(lVar14 + 0x10) = uVar3;
          *(undefined4 *)(lVar14 + 0x14) = uVar4;
          *(undefined4 *)(lVar14 + 0x18) = uVar5;
          if (lVar13 == 0) {
LAB_055087f0:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_054fc338();
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087f0;
          *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        }
        FUN_05506338();
        if ((unaff_w27 & 1) == 0) {
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
        uVar3 = FUN_054fbb50();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar4 = FUN_054f6fe4();
        FUN_0550147c();
        if ((unaff_w27 & 1) == 0) {
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
        FUN_054fc458(*(long *)(unaff_x19 + 0x10),unaff_w27 & 1,in_stack_00000030);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar5 = FUN_054f6fe4();
        uVar12 = *(undefined8 *)(lVar9 + 0x18);
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
        FUN_05116b38(lVar9,0);
        *(undefined8 *)(lVar9 + 0x10) = uVar12;
        *(undefined4 *)(lVar9 + 0x18) = uVar3;
        *(undefined4 *)(lVar9 + 0x1c) = uVar4;
        *(undefined4 *)(lVar9 + 0x20) = uVar5;
        *(long *)(lVar9 + 0x28) = lVar14;
        if (lVar6 == 0) {
LAB_055087ec:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = *(long *)(lVar6 + 0x10);
        lVar13 = *(long *)OVRPlugin_OVRP_1_129_0_TypeInfo;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_055087ec;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
        }
        else {
          FUN_03abf904(lVar6,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087ec;
        *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *(long *)(unaff_x19 + 0x18);
        uVar3 = FUN_054f6fe4();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0550dba0(lVar9,auVar15._0_8_,auVar15._8_8_,uVar3,0);
      } while( true );
    }
    goto LAB_055087f4;
  }
  if (*(long *)(unaff_x23 + 0x28) == 0) goto LAB_055087f4;
  lVar6 = 0;
LAB_05508654:
  FUN_05506338();
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000020 == 0)) goto LAB_055087f4;
  FUN_054eb158(in_stack_00000020,*(long *)(unaff_x19 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
  FUN_054fc110(*(long *)(unaff_x19 + 0x10),in_stack_00000020);
  FUN_05501c04();
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (System_Data_Common_ObjectStorage__VerifyIDynamicMetaObjectProvider(),
     *(long *)(unaff_x19 + 0x10) == 0)) goto LAB_055087f4;
  uVar3 = *(undefined4 *)(in_stack_00000020 + 0x10);
  uVar4 = *(undefined4 *)(in_stack_00000030 + 0x10);
  uVar5 = FUN_054f6fe4();
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_03ac12f8(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  }
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar6,0);
  *(undefined4 *)(lVar6 + 0x18) = uVar3;
  *(undefined4 *)(lVar6 + 0x1c) = uVar5;
  *(undefined4 *)(lVar6 + 0x20) = uVar4;
  *(undefined4 *)(lVar6 + 0x10) = uStack0000000000000018;
  *(undefined4 *)(lVar6 + 0x14) = uStack000000000000001c;
  *(undefined8 *)(lVar6 + 0x28) = uVar12;
  if (in_stack_00000010 == 0) goto LAB_055087f4;
  lVar9 = *(long *)(unaff_x19 + 0x30);
  *(long *)(in_stack_00000010 + 0x18) = lVar6;
  if (lVar9 == 0) goto LAB_055087f4;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar9 + 0x20);
  goto LAB_05508734;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_055085e4:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0550862c;
    }
  }
LAB_055085fc:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b0,0);
LAB_0550862c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_05508638:
  if (*(long *)(unaff_x23 + 0x28) != 0) goto LAB_05508654;
  if (lVar6 == 0) goto LAB_055087f4;
  uVar3 = *(undefined4 *)(in_stack_00000030 + 0x10);
  uVar12 = FUN_03ac12f8(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
  FUN_05116b38(lVar6,0);
  *(undefined4 *)(lVar6 + 0x20) = uVar3;
  *(undefined8 *)(lVar6 + 0x28) = uVar12;
  *(undefined4 *)(lVar6 + 0x10) = uStack0000000000000018;
  *(undefined4 *)(lVar6 + 0x14) = uStack000000000000001c;
  *(undefined8 *)(lVar6 + 0x18) = 0x7fffffff7fffffff;
  if (in_stack_00000010 == 0) goto LAB_055087f4;
  *(long *)(in_stack_00000010 + 0x18) = lVar6;
LAB_05508734:
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (in_stack_00000008 != 0)) {
    FUN_054eb158(in_stack_00000008,*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
      return;
    }
  }
LAB_055087f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


