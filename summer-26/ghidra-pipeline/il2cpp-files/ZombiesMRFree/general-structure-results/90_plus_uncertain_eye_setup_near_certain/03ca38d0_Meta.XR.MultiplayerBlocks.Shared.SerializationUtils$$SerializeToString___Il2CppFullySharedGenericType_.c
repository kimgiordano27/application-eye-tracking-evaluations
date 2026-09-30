/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03ca38d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_02fe925c(PTR_DAT_06f99a88);
    FUN_02fe925c(PTR_DAT_06f99a90);
    FUN_02fe925c(PTR_DAT_06f998e0);
    FUN_02fe925c(PTR_DAT_06f99928);
    FUN_02fe925c(PTR_DAT_06f6d508);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_02feb320(param_5);
    }
  }
  puVar1 = PTR_DAT_06f998e0;
  if (param_1 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar6 = thunk_FUN_0301080c();
    uVar14 = thunk_FUN_03037804(PTR_DAT_06f99920);
    FUN_05a5e9c8(uVar6,uVar14,0);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06f998e0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if ((int)uVar14 == 0) {
      uVar15 = *(ulong *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if ((uVar15 & 0x700000000) == 0) {
        lVar16 = *(long *)(param_1 + 0x78);
        iVar3 = (**(code **)**(undefined8 **)(param_5 + 0x38))();
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(lVar8);
        }
        uVar4 = FUN_0660e258(param_1 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d508);
        }
        uVar4 = FUN_05af01a8((long)iVar3,uVar4,0);
        uVar14 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x38) + 0x10))(param_2);
        puVar1 = PTR_DAT_06f99928;
        if (lVar16 != 0) {
          iVar3 = *(int *)(param_1 + 0x14);
          iVar11 = *(int *)(lVar16 + 0x14);
          lVar8 = *(long *)PTR_DAT_06f99928;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar8 = *(long *)puVar1;
          }
          lVar17 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (param_3 == 0) {
            lVar9 = lVar17;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar9 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            }
            if (lVar9 == 0) goto LAB_03ca3b84;
            param_3 = FUN_065c0128(lVar9,0);
          }
          iVar3 = iVar3 - iVar11;
          uVar15 = FUN_065fbec8(&stack0x00000008,0);
          bVar2 = (uVar15 & 1) == 0;
          lVar8 = 0;
          if (bVar2) {
            lVar8 = lVar17;
          }
          lVar9 = 0;
          if (bVar2) {
            lVar9 = lVar16;
          }
          iVar11 = 0;
          if (bVar2) {
            iVar11 = param_3;
          }
          uVar6 = 0;
          if (bVar2) {
            uVar6 = uVar14;
          }
          iVar18 = 0;
          if (bVar2) {
            iVar18 = iVar3;
          }
          uVar13 = 0;
          if (bVar2) {
            uVar13 = uVar4;
          }
          if ((uVar15 & 1) == 0) {
            plVar12 = (long *)**(undefined8 **)(*(long *)PTR_DAT_06f99a90 + 0xb8);
            if (plVar12 == (long *)0x0) goto LAB_03ca3b84;
            lVar16 = *plVar12;
            uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar15 != 0) {
              piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06f99a88) {
                  puVar5 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
                  goto LAB_03ca3b24;
                }
                uVar15 = uVar15 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar15 != 0);
            }
            puVar5 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f99a88,0x13);
LAB_03ca3b24:
            (*(code *)*puVar5)(plVar12,puVar5[1]);
          }
          else {
            FUN_06606a3c(&stack0x00000008,0);
            lVar9 = lVar16;
            uVar6 = uVar14;
            lVar8 = lVar17;
            iVar18 = iVar3;
            iVar11 = param_3;
            uVar13 = uVar4;
          }
          if (lVar8 != 0) {
            FUN_065c513c(lVar8,lVar9,iVar11,uVar6,iVar18,uVar13,uStack0000000000000008,0);
            return;
          }
        }
LAB_03ca3b84:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
    }
    uVar14 = thunk_FUN_03037804(PTR_DAT_06f99ab8);
    uVar14 = FUN_059693f4(uVar14,param_1,0);
    thunk_FUN_03037804(PTR_DAT_06f6d8e8);
    uVar6 = thunk_FUN_0301080c();
    uVar7 = thunk_FUN_03037804(PTR_DAT_06f99920);
    FUN_05a5ea40(uVar6,uVar14,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar6,param_5);
}


