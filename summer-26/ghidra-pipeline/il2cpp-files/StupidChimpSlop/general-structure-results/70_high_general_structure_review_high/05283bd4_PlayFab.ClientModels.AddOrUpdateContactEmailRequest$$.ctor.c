/*
FUNCTION_NAME: PlayFab.ClientModels.AddOrUpdateContactEmailRequest$$.ctor
ENTRY_POINT: 05283bd4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void PlayFab_ClientModels_AddOrUpdateContactEmailRequest___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x20;
  long lVar9;
  long unaff_x21;
  undefined8 uVar10;
  
  FUN_02d4dc40();
  FUN_02d4dc40(PTR_DAT_0664b728);
  FUN_02d4dc40(PTR_DAT_066462d0);
  FUN_02d4dc40(PTR_DAT_06647a68);
  FUN_02d4dc40(System_Collections_Generic_List<char>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_List<BaseRuntimePanel>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_List<ChimpRig>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x4fa) = 1;
  puVar1 = System_Action<string>_TypeInfo;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar3 = *unaff_x20;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  uVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_0356967c();
  puVar2 = System_Collections_Generic_List<BaseRuntimePanel>_TypeInfo;
  puVar1 = PTR_DAT_066462d0;
  if (lVar3 != 0) {
    FUN_051fc5cc(lVar3,uVar4,0);
    thunk_FUN_0526b90c();
    uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_05ee2f7c(uVar4);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
      plVar6 = (long *)FUN_0526b460(**(long **)(*(long *)puVar2 + 0xb8),0);
      lVar9 = *(long *)PTR_DAT_06648110;
      lVar3 = *(long *)(lVar9 + 0x38);
      if (lVar3 == 0) {
        FUN_02d87268(lVar9);
        lVar3 = *(long *)(lVar9 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d8720c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d8720c();
      }
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        uVar4 = **(undefined8 **)(lVar3 + 0xb8);
        uVar10 = *(undefined8 *)System_Collections_Generic_List<ChimpRig>_TypeInfo;
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto PlayFab_ClientModels_GetCharacterDataRequest___ctor;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_GetCharacterDataRequest___ctor:
        (*(code *)*puVar7)(plVar6,3,uVar10,uVar4,puVar7[1]);
        **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
        thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


