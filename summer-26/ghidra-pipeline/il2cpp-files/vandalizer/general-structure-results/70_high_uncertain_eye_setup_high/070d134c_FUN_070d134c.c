/*
FUNCTION_NAME: FUN_070d134c
ENTRY_POINT: 070d134c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_070d134c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 local_70 [32];
  
  if ((DAT_07a5a9b7 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d7700);
    FUN_031f20f4(PTR_DAT_075d7708);
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(PTR_DAT_0759d470);
    FUN_031f20f4(PTR_DAT_0759ca18);
    FUN_031f20f4(OVRPlugin_OverlayShape_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b36e0);
    DAT_07a5a9b7 = 1;
  }
  plVar11 = (long *)(param_1 + 0x40);
  if (*plVar11 == 0) {
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d7708);
    FUN_0709d5d0(lVar3,0);
    if (lVar3 == 0) goto LAB_070d1744;
    plVar4 = (long *)FUN_06fc2334(lVar3,0);
    uVar5 = FUN_050a637c(1,*(undefined8 *)
                            System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo);
    puVar2 = PTR_DAT_075d7700;
    if (plVar4 == (long *)0x0) goto LAB_070d1744;
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075d7700) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 99) * 0x10 + 0x138);
          goto LAB_070d149c;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar4,*(long *)PTR_DAT_075d7700,99);
LAB_070d149c:
    (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
    plVar4 = (long *)FUN_06fc2334(lVar3,0);
    auVar12 = FUN_06fe1fb0(0,0);
    if (plVar4 == (long *)0x0) goto LAB_070d1744;
    lVar10 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0x2b) * 0x10 + 0x138);
          goto LAB_070d1528;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar4,lVar7,0x2b);
LAB_070d1528:
    (*(code *)*puVar6)(plVar4,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar6[1]);
    plVar4 = (long *)FUN_06fc2334(lVar3,0);
    FUN_06fe109c(local_70,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (plVar4 == (long *)0x0) goto LAB_070d1744;
    lVar7 = *(long *)puVar2;
    lVar10 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0x2d) * 0x10 + 0x138);
          goto LAB_070d15dc;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar4,lVar7,0x2d);
LAB_070d15dc:
    (*(code *)*puVar6)(plVar4,local_70,puVar6[1]);
    *plVar11 = lVar3;
    thunk_FUN_0329bf60(plVar11,lVar3);
    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = FUN_03e95e0c(*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
    if ((lVar3 == 0) || (lVar3 = FUN_070fbde8(lVar3,0), lVar3 == 0)) goto LAB_070d1744;
    FUN_06fcd3a0(lVar3,*plVar11,0);
  }
  lVar3 = *(long *)(param_1 + 0x48);
  uVar5 = FUN_05c7e0d4(param_2,*(undefined8 *)PTR_DAT_075b36e0,0);
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar10 = *(long *)PTR_DAT_0759bc60;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_0329bf60();
      }
      else {
        FUN_047af440(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 != 0) {
        if (10 < *(int *)(lVar3 + 0x18)) {
          FUN_047b0b9c(lVar3,0,*(undefined8 *)PTR_DAT_0759d470);
          lVar3 = *(long *)(param_1 + 0x48);
        }
        plVar11 = (long *)*plVar11;
        uVar5 = FUN_05c88d64(lVar3,0);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0xdf8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0xe00));
          return;
        }
      }
    }
  }
LAB_070d1744:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


