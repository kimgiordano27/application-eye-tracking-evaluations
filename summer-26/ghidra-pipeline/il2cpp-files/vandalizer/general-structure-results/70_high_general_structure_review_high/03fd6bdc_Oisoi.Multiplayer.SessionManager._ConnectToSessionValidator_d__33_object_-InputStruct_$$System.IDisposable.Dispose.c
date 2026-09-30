/*
FUNCTION_NAME: Oisoi.Multiplayer.SessionManager.<ConnectToSessionValidator>d__33<object,-InputStruct>$$System.IDisposable.Dispose
ENTRY_POINT: 03fd6bdc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Oisoi_Multiplayer_SessionManager_<ConnectToSessionValidator>d__33<object,_InputStruct>__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  ulong uVar7;
  ulong uVar8;
  
  puVar2 = (undefined8 *)FUN_06803474(param_1,0x40,param_3,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[3] = (long)puVar2 + (long)unaff_w23;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = (**(code **)**(undefined8 **)(unaff_x21 + 0x38))();
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = 0x3ff0 / iVar1;
    }
    *(int *)(puVar2 + 2) = iVar3;
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    if (0 < (int)unaff_w22) {
      lVar4 = puVar2[3];
      uVar6 = (ulong)unaff_w22 - 1;
      iVar3 = 0;
      uVar5 = (ulong)unaff_w22 + 1 & 0x1fffffffe;
      uVar7 = _DAT_014bcdb0;
      uVar8 = _UNK_014bcdb8;
      do {
        if (uVar7 <= uVar6) {
          *(undefined8 *)(lVar4 + iVar3) = 0;
        }
        if (uVar8 <= uVar6) {
          *(undefined8 *)(lVar4 + (iVar3 + 0x40)) = 0;
        }
        uVar7 = uVar7 + 2;
        uVar8 = uVar8 + 2;
        uVar5 = uVar5 - 2;
        iVar3 = iVar3 + 0x80;
      } while (uVar5 != 0);
    }
    *unaff_x19 = puVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


