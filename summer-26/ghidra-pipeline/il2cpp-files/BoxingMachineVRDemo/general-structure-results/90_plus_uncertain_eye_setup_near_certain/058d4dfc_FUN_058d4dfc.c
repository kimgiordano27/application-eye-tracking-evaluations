/*
FUNCTION_NAME: FUN_058d4dfc
ENTRY_POINT: 058d4dfc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_058d4dfc(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  int extraout_w1;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_180 [96];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined4 local_54;
  
  puVar2 = PTR_DAT_06767838;
  if ((DAT_06b80af2 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_BodyJointSet_TypeInfo);
    FUN_02d6084c(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(Unity_Collections_AllocatorManager_Managed_TypeInfo);
    DAT_06b80af2 = 1;
  }
  lVar7 = *(long *)puVar2;
  local_54 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar9 == 0) {
LAB_058d519c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (param_1 < *(uint *)(lVar9 + 0x18)) {
    lVar14 = (long)(int)param_1;
    if (*(char *)(lVar9 + lVar14 * 0xb8 + 0x58) != '\0') {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *(long *)puVar2;
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
        if (lVar9 == 0) goto LAB_058d519c;
      }
      if (*(uint *)(lVar9 + 0x18) <= param_1) goto Unity_Mathematics_uint2x2__get_Item;
      if (*(long *)(lVar9 + lVar14 * 0xb8 + 0x50) != 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
          if (lVar9 == 0) goto LAB_058d519c;
        }
        if (*(uint *)(lVar9 + 0x18) <= param_1) goto Unity_Mathematics_uint2x2__get_Item;
        plVar13 = *(long **)(lVar9 + lVar14 * 0xb8 + 0x50);
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        if (plVar13 == (long *)0x0) goto LAB_058d519c;
        lVar9 = *(long *)System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloInt64_TypeInfo;
        memcpy(auStack_180,&local_120,0x60);
        lVar7 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_058d4fc0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar9,1);
LAB_058d4fc0:
        pcVar15 = (code *)*puVar8;
        memcpy(auStack_c0,auStack_180,0x60);
        (*pcVar15)(plVar13,auStack_c0,puVar8[1]);
        lVar7 = *(long *)puVar2;
      }
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)puVar2;
    }
    puVar6 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
    puVar5 = OVRPlugin_BodyJointSet_TypeInfo;
    puVar4 = OVRPlugin_BodyJointLocation_TypeInfo;
    puVar3 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 == 0) goto LAB_058d519c;
    if (param_1 < *(uint *)(lVar7 + 0x18)) {
      FUN_05853890(lVar7 + lVar14 * 0xb8 + 0x78,0);
      FUN_058d46f4(param_1);
      iVar12 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          iVar1 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
        }
        else {
          iVar1 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
        }
        if (iVar1 <= iVar12) {
          FUN_058d3a78(param_1,1,0);
          local_54 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          FUN_032de00c(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),&local_54,param_1,
                       *(undefined8 *)puVar5);
          FUN_032deb00(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),
                       *(long *)(*(long *)puVar2 + 0xb8) + 0x18,param_1,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) == 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_058d67a0();
            FUN_058d6850();
          }
          return;
        }
        FUN_037a47e4(*(long *)(*(long *)puVar2 + 0xb8) + 0x48,iVar12,*(undefined8 *)puVar4);
        lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
        lVar9 = *(long *)(lVar7 + 0x28);
        if (lVar9 == 0) goto LAB_058d519c;
        if (*(uint *)(lVar9 + 0x18) <= param_1) break;
        if (*(int *)(lVar9 + lVar14 * 4 + 0x20) == extraout_w1) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
          }
          FUN_037a56f8(lVar7 + 0x48,iVar12,*(undefined8 *)puVar3);
          iVar12 = iVar12 + -1;
        }
        iVar12 = iVar12 + 1;
      }
    }
  }
Unity_Mathematics_uint2x2__get_Item:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


