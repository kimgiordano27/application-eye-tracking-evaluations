/*
FUNCTION_NAME: FUN_05508c0c
ENTRY_POINT: 05508c0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_05508c0c(long param_1,long *param_2,long param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar3 = PTR_DAT_067cbc80;
                    /* try { // try from 05508c1c to 05608c3f has its CatchHandler @ 05509894 */
  if ((DAT_06bbf576 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067cbc88);
    DAT_06bbf576 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar5 = FUN_0552a738(param_3,0);
  puVar3 = OVRPlugin_OVRP_1_30_0_TypeInfo;
  if (param_3 == 0) goto LAB_05509100;
  uVar6 = FUN_050162b4(param_3,0);
  if (((uVar6 & 1) == 0) && (lVar7 = FUN_05503f1c(param_1,param_2,0xffffffff), lVar7 != 0)) {
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_03abf108(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    if (lVar8 == 0) goto LAB_05509100;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05509100;
    uVar4 = *(uint *)(lVar8 + 0x18);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar4 + 1;
      *(long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = lVar7;
      plVar2 = (long *)OVRPlugin_OVRP_1_2_0_TypeInfo;
    }
    else {
      FUN_03abf904(lVar8,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      plVar2 = (long *)OVRPlugin_OVRP_1_2_0_TypeInfo;
    }
  }
  else {
    lVar8 = 0;
    plVar2 = (long *)OVRPlugin_OVRP_1_2_0_TypeInfo;
  }
  OVRPlugin_OVRP_1_2_0_TypeInfo = (undefined *)plVar2;
  if (param_4 == (long *)0x0) goto LAB_05509100;
  lVar7 = *param_4;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *plVar2) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_05508e00;
      }
      uVar6 = uVar6 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_02f421d0(param_4,*plVar2,1);
LAB_05508e00:
  uVar4 = (*(code *)*puVar9)(param_4,puVar9[1]);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      lVar7 = *param_4;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05508e68;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(param_4,*plVar2,0);
LAB_05508e68:
      uVar10 = (*(code *)*puVar9)(param_4,uVar15,puVar9[1]);
      if (lVar5 == 0) goto LAB_05509100;
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar11 = *(long **)(lVar5 + (ulong)uVar15 * 8 + 0x20);
      if ((plVar11 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0)),
         lVar7 == 0)) goto LAB_05509100;
      uVar6 = FUN_050eed58(lVar7,0);
      if ((uVar6 & 1) == 0) {
        FUN_05500c08(param_1,uVar10);
      }
      else {
        lVar7 = FUN_05503f1c(param_1,uVar10,uVar15);
        if (lVar7 != 0) {
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo);
            FUN_03abf108(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
            if (lVar8 == 0) goto LAB_05509100;
          }
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_05509100;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_03abf904(lVar8,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar4);
  }
  uVar6 = FUN_050162b4(param_3,0);
  if ((uVar6 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_05509100;
    uVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
    }
    uVar6 = FUN_0552b3f4(uVar10,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fb8bc(*(long *)(param_1 + 0x10),param_3,lVar5);
        return;
      }
      goto LAB_05509100;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      uVar10 = FUN_054eb4c4(param_3,lVar5,0);
      FUN_054f6d80(lVar7,uVar10);
      return;
    }
  }
  else {
    uVar10 = FUN_03ac12f8(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
    if (lVar7 != 0) {
      FUN_054fb80c(lVar7,param_3,lVar5,uVar10);
      FUN_03ac039c(&local_78,lVar8,*(undefined8 *)OVRPlugin_OVRP_1_31_0_TypeInfo);
      puVar3 = OVRPlugin_OVRP_1_28_0_TypeInfo;
      while( true ) {
        uVar6 = FUN_04aff1b0(&local_78,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          FUN_04aff1ac(&local_78,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
          return;
        }
        if (local_68 == (long *)0x0) break;
        (**(code **)(*local_68 + 0x188))
                  (local_68,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(*local_68 + 400));
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
LAB_05509100:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


