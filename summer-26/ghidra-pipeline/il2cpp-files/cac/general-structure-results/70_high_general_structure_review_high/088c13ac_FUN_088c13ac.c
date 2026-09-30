/*
FUNCTION_NAME: FUN_088c13ac
ENTRY_POINT: 088c13ac
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_10;telemetry_or_network_hits_5
*/


uint FUN_088c13ac(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint local_34;
  
  if ((DAT_096a381a & 1) == 0) {
    FUN_03f13384(PTR_DAT_091a8b90);
    FUN_03f13384(PTR_DAT_0914f170);
    FUN_03f13384(PTR_DAT_091885a0);
    FUN_03f13384(PTR_DAT_09121d50);
    DAT_096a381a = 1;
  }
  local_34 = 0;
  if ((param_1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160)),
     param_4 != 0)) {
    uVar3 = FUN_06f254f0(param_4,uVar2,&local_34,*(undefined8 *)PTR_DAT_0914f170);
    if ((uVar3 & 1) != 0) {
      return local_34;
    }
    local_34 = FUN_06f23820(param_4,*(undefined8 *)PTR_DAT_091885a0);
    FUN_06f23b70(param_4,uVar2,local_34,*(undefined8 *)PTR_DAT_09121d50);
    lVar6 = *param_3;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= (int)local_34) {
        uVar1 = local_34 | (int)local_34 >> 0x10;
        uVar1 = uVar1 | (int)uVar1 >> 8;
        uVar1 = uVar1 | (int)uVar1 >> 4;
        uVar1 = uVar1 | (int)uVar1 >> 2;
        FUN_047838f0(param_3,(uVar1 | (int)uVar1 >> 1) + 1,*(undefined8 *)PTR_DAT_091a8b90);
        lVar6 = *param_3;
        if (lVar6 == 0) goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (local_34 < uVar1) {
        *(uint *)(lVar6 + 0x20 + (long)(int)local_34 * 0x38) = local_34;
        if (local_34 < uVar1) {
          *(undefined8 *)(lVar6 + 0x20 + (long)(int)local_34 * 0x38 + 8) =
               *(undefined8 *)(lVar6 + 0x28);
          thunk_FUN_03f86000();
          lVar6 = *param_3;
          if (lVar6 == 0) goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
          if (local_34 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)local_34 * 0x38 + 0x30);
            *puVar4 = param_2;
            thunk_FUN_03f86000(puVar4,param_2);
            lVar6 = *param_3;
            if (lVar6 == 0)
            goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
            if (local_34 < *(uint *)(lVar6 + 0x18)) {
              plVar5 = (long *)(lVar6 + (long)(int)local_34 * 0x38 + 0x38);
              *plVar5 = (long)param_1;
              thunk_FUN_03f86000(plVar5,param_1);
              lVar6 = *param_3;
              if (lVar6 == 0)
              goto UnityEngine_UIElements_CreationContext__get_serializedDataOverrides;
              if (local_34 < *(uint *)(lVar6 + 0x18)) {
                *(undefined4 *)(lVar6 + (long)(int)local_34 * 0x38 + 0x54) = 0;
                return local_34;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
  }
UnityEngine_UIElements_CreationContext__get_serializedDataOverrides:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


