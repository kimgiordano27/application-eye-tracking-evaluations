/*
FUNCTION_NAME: FUN_03969070
ENTRY_POINT: 03969070
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


undefined8
FUN_03969070(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4,
            long param_5,uint param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_03dac8c8;
  if ((DAT_03ffc4b3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dac8d0);
    thunk_FUN_01ad9084(PTR_DAT_03dac8d8);
    thunk_FUN_01ad9084(PTR_DAT_03dac8c8);
    DAT_03ffc4b3 = 1;
  }
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(lVar3,0);
  if (DAT_03ffc448 == (code *)0x0) {
    DAT_03ffc448 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_activeTerrains()");
  }
  lVar4 = (*DAT_03ffc448)();
  if (lVar4 != 0) {
    if (DAT_03ffc448 == (code *)0x0) {
      DAT_03ffc448 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_activeTerrains()");
    }
    lVar4 = (*DAT_03ffc448)();
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 == 0) {
LAB_03969318:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03922f24(param_4,0,0);
      if ((uVar5 & 1) == 0) {
        if (param_4 != 0) {
          if (DAT_03ffc428 == (code *)0x0) {
            DAT_03ffc428 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_terrainData()");
          }
          uVar6 = (*DAT_03ffc428)(param_4);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar5 = FUN_03922f24(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            return 0;
          }
          if (DAT_03ffc438 == (code *)0x0) {
            DAT_03ffc438 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_groupingID()");
          }
          uVar2 = (*DAT_03ffc438)(param_4);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x10) = uVar2;
            lVar4 = FUN_0391c27c(param_4,0);
            if (lVar4 != 0) {
              uVar6 = FUN_03928d34(lVar4,0);
              lVar4 = FUN_0391c27c(param_4,0);
              if (lVar4 != 0) {
                FUN_03928d34(lVar4,0);
                uVar8 = param_3;
                if (DAT_03ffc428 == (code *)0x0) {
                  DAT_03ffc428 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_terrainData()");
                }
                lVar4 = (*DAT_03ffc428)(param_4);
                if (lVar4 != 0) {
                  uVar7 = FUN_03968968();
                  if (DAT_03ffc428 == (code *)0x0) {
                    DAT_03ffc428 = (code *)FUN_01b47f04("UnityEngine.Terrain::get_terrainData()");
                  }
                  lVar4 = (*DAT_03ffc428)(param_4);
                  if (lVar4 != 0) {
                    FUN_03968968();
                    if (param_5 == 0) {
                      param_5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03dac8d0);
                      FUN_02d7dbc4(param_5,lVar3,*(undefined8 *)PTR_DAT_03dac8d8,0);
                    }
                    uVar6 = FUN_03969324(uVar6,param_3,uVar7,uVar8,param_5,param_6 & 1);
                    return uVar6;
                  }
                }
              }
            }
          }
        }
        goto LAB_03969318;
      }
    }
  }
  return 0;
}


