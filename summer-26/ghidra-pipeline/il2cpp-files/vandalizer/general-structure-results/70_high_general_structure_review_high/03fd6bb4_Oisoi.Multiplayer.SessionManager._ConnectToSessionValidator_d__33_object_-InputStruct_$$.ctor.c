/*
FUNCTION_NAME: Oisoi.Multiplayer.SessionManager.<ConnectToSessionValidator>d__33<object,-InputStruct>$$.ctor
ENTRY_POINT: 03fd6bb4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Oisoi_Multiplayer_SessionManager_<ConnectToSessionValidator>d__33<object,_InputStruct>___ctor
               (void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = UnityEngine_InputForUI_Event__get_asTextInputEvent();
  iVar2 = FUN_06803a78(0x20,0x40,0);
  puVar4 = (undefined8 *)FUN_06803474((long)(int)(iVar2 + uVar1 * 0x40),0x40,unaff_w20,0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = (long)puVar4 + (long)iVar2;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar3 = (**(code **)**(undefined8 **)(unaff_x21 + 0x38))();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = 0x3ff0 / iVar3;
    }
    *(int *)(puVar4 + 2) = iVar2;
    *(undefined4 *)((long)puVar4 + 0x14) = 0;
    if (0 < (int)uVar1) {
      lVar5 = puVar4[3];
      uVar7 = (ulong)uVar1 - 1;
      iVar2 = 0;
      uVar6 = (ulong)uVar1 + 1 & 0x1fffffffe;
      uVar8 = _DAT_014bcdb0;
      uVar9 = _UNK_014bcdb8;
      do {
        if (uVar8 <= uVar7) {
          *(undefined8 *)(lVar5 + iVar2) = 0;
        }
        if (uVar9 <= uVar7) {
          *(undefined8 *)(lVar5 + (iVar2 + 0x40)) = 0;
        }
        uVar8 = uVar8 + 2;
        uVar9 = uVar9 + 2;
        uVar6 = uVar6 - 2;
        iVar2 = iVar2 + 0x80;
      } while (uVar6 != 0);
    }
    *unaff_x19 = puVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


