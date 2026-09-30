/*
FUNCTION_NAME: FUN_02bc96cc
ENTRY_POINT: 02bc96cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bc99ac) */

undefined8 FUN_02bc96cc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  char local_44 [4];
  
  if ((DAT_04128fb7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc09d8);
    FUN_01ab69ac(PTR_DAT_03d14318);
    FUN_01ab69ac(PTR_DAT_03d14320);
    FUN_01ab69ac(PTR_DAT_03cd81b0);
    FUN_01ab69ac(PTR_DAT_03d14328);
    FUN_01ab69ac(PTR_DAT_03d14330);
    FUN_01ab69ac(PTR_DAT_03d14338);
    FUN_01ab69ac(PTR_DAT_03d14340);
    DAT_04128fb7 = 1;
  }
  if ((param_2 != 0) && (param_4 != 0)) {
    lVar4 = FUN_025c2a9c(param_2,0);
    if ((lVar4 == 0) || (lVar5 = System_IO_TextReader_<>c___cctor(lVar4,0), lVar5 == 0)) {
LAB_02bc99b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = FUN_025c36fc(lVar5,*(undefined8 *)PTR_DAT_03d14340,0);
    if (iVar3 != -1) {
      lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc09d8,2);
      if (lVar5 == 0) goto LAB_02bc99b4;
      if ((*(int *)(lVar5 + 0x18) == 0) ||
         (*(undefined2 *)(lVar5 + 0x20) = 0x20, *(int *)(lVar5 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined2 *)(lVar5 + 0x22) = 9;
      iVar3 = FUN_025c3298(lVar4,lVar5,0);
      if (iVar3 == -1) {
        uVar6 = 0;
        plVar7 = (long *)PTR_DAT_03d14328;
      }
      else {
        lVar4 = FUN_025c262c(lVar4,iVar3,0);
        if (lVar4 == 0) goto LAB_02bc99b4;
        uVar6 = FUN_025c2a9c(lVar4,0);
        plVar7 = (long *)PTR_DAT_03d14328;
      }
      PTR_DAT_03d14328 = (undefined *)plVar7;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cd81b0 + 0x130);
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_03cd81b0)) {
          lVar4 = *plVar7;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *plVar7;
          }
          uVar8 = **(undefined8 **)(lVar4 + 0xb8);
          local_44[0] = '\0';
          FUN_027e0bd8(uVar8,local_44,0);
          lVar4 = *plVar7;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *plVar7;
          }
          puVar2 = PTR_DAT_03d14338;
          lVar5 = *(long *)PTR_DAT_03d14338;
          lVar4 = **(long **)(lVar4 + 0xb8);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar5);
            lVar5 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar5);
              lVar5 = *(long *)puVar2;
            }
            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
            lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d14320);
            FUN_0218c698(lVar9,uVar10,*(undefined8 *)PTR_DAT_03d14330,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar7 = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar9);
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar4 = FUN_02189474(lVar4,param_3,lVar9,*(undefined8 *)PTR_DAT_03d14318);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar6 = FUN_02bc922c(lVar4,uVar6,param_3,param_4);
          if (local_44[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
            return uVar6;
          }
          return uVar6;
        }
      }
    }
  }
  return 0;
}


