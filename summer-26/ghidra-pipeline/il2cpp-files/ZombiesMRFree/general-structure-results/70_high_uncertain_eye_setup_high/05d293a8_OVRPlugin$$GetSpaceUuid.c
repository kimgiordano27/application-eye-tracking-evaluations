/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 05d293a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUuid
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((*(byte *)(unaff_x20 + 0x931) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9acf0);
    FUN_02fe925c(PTR_DAT_06fb4c68);
    FUN_02fe925c(PTR_DAT_06fb8368);
    *(undefined1 *)(unaff_x20 + 0x931) = 1;
  }
  plVar6 = *(long **)(param_5 + 0x68);
  if (plVar6 == (long *)0x0) {
    bVar1 = *(char *)(param_5 + 0xa4) != '\0';
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06f9acf0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d2945c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06f9acf0,0);
LAB_05d2945c:
    bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (param_6 != 0) {
    FUN_05d28d5c(param_6,bVar1 & 1);
    if (*(char *)(param_6 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(param_5 + 0x38) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x158);
      if (*(int *)(*(long *)PTR_DAT_06fb8368 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05d032f0();
      uVar7 = FUN_05d28cac(param_6);
      if (*(long *)(param_5 + 0x38) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x148);
        uVar11 = param_3;
        FUN_05d03518();
        uVar8 = FUN_068ed124(0);
        lVar3 = FUN_068f5d7c(param_5,0);
        if (lVar3 != 0) {
          FUN_06904e58(uVar7,uVar9,param_3,uVar8,uVar10,uVar11,param_4,lVar3,0);
          if (*(long *)(param_5 + 0x40) != 0) {
            FUN_068cd970(*(long *)(param_5 + 0x40),1,0);
            plVar6 = *(long **)(param_5 + 0x58);
            if (plVar6 == (long *)0x0) {
              uVar4 = (ulong)*(uint *)(param_5 + 0xa8);
            }
            else {
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4c68) {
                    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                    goto LAB_05d295c4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4c68,0);
LAB_05d295c4:
              uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
            }
            lVar3 = 0x98;
            if (*(char *)(param_5 + 0xb0) != '\0') {
              lVar3 = 0x90;
            }
            if (*(long *)(param_5 + lVar3) != 0) {
              FUN_068b63c8(uVar4,*(long *)(param_5 + lVar3),0);
              FUN_05d291e8(param_5);
              FUN_05d2962c(param_5,bVar1 & 1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


