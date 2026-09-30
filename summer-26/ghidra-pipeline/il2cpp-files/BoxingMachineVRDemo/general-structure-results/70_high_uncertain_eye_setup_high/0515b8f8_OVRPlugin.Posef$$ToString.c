/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 0515b8f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef__ToString(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_06b79e12 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782240);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_0675f8d8);
    FUN_02d6084c(PTR_DAT_06769a28);
    FUN_02d6084c(PTR_DAT_06769a20);
    DAT_06b79e12 = 1;
  }
  if (param_1 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    puVar1 = PTR_DAT_06782240;
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782240) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0515b9c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_06782240,0);
LAB_0515b9c8:
      puVar2 = PTR_DAT_0675f8d8;
      lVar7 = (*(code *)*puVar4)(plVar3,0,puVar4[1]);
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0515ba30;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,0);
LAB_0515ba30:
      lVar8 = (*(code *)*puVar4)(plVar3,1,puVar4[1]);
      plVar3 = (long *)FUN_02d60934(*(undefined8 *)puVar2,2);
      if (plVar3 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_02d9d438(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0515bb64:
          uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar7;
          thunk_FUN_02dd37b4(plVar3 + 4,lVar7);
          if ((lVar8 != 0) &&
             (lVar7 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
          goto LAB_0515bb64;
          puVar1 = PTR_DAT_0675e238;
          if (1 < *(uint *)(plVar3 + 3)) {
            plVar3[5] = lVar8;
            thunk_FUN_02dd37b4(plVar3 + 5,lVar8);
            uVar6 = FUN_05020f78(param_1,plVar3,0);
            lVar7 = FUN_02d60934(*(undefined8 *)puVar1,2);
            if (lVar7 == 0) goto LAB_0515bb5c;
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_06769a20;
              thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
              if (1 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_06769a28;
                thunk_FUN_02dd37b4();
                FUN_050eb714(param_1,uVar6,lVar7,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
    }
  }
LAB_0515bb5c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


