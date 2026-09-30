/*
FUNCTION_NAME: FUN_0309ee7c
ENTRY_POINT: 0309ee7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_0309ee7c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  
  if ((DAT_0412b56c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe188);
    FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
    FUN_01ab69ac(UnityEngine_InputSystem_LowLevel_IInputStateTypeInfo_var);
    FUN_01ab69ac(UnityEngine_Timeline_IMarker_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1828);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(System_FlagsAttribute_var);
    DAT_0412b56c = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (-1 < param_2) {
    if (((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x30), lVar5 == 0)) goto LAB_0309f148;
    if (*(int *)(lVar5 + 0x18) <= param_2) {
      return 0;
    }
    FUN_02215a88(lVar5,param_2,&local_38,
                 *(undefined8 *)
                  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    puVar4 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
    lVar5 = CONCAT44(uStack_34,local_38);
    if (*(int *)(*(long *)System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_0412b5aa == '\0') {
      FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
      DAT_0412b5aa = '\x01';
    }
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar4;
    }
    if (**(char **)(lVar6 + 0xb8) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0366d138(0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)System_FlagsAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_03054410(lVar5,&local_48,0);
        if ((uVar7 & 1) != 0) {
          if (local_48 == 0) goto LAB_0309f148;
          uVar1 = *(uint *)(local_48 + 0x10);
          if (-1 < (int)uVar1) {
            if ((*(long *)(param_1 + 0x28) == 0) ||
               (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x40), lVar6 == 0)) goto LAB_0309f148;
            if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
              local_40 = 0;
              local_38 = uVar1;
              FUN_02241190(&local_40,&local_38,*(undefined8 *)PTR_DAT_03cc1828);
              return local_40;
            }
          }
        }
      }
    }
    puVar4 = PTR_DAT_03cc1820;
    if (lVar5 == 0) {
LAB_0309f148:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x14);
    local_50 = uVar10;
    FUN_01ba9478(&local_50,&local_38,*(undefined8 *)PTR_DAT_03cc1820);
    uVar1 = local_38;
    puVar3 = PTR_DAT_03cc1790;
    lVar5 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pbVar8 = (byte *)thunk_FUN_01a59484(&local_50,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    if (((uint)*pbVar8 & ~uVar1 >> 0x1f) != 0) {
      local_50 = uVar10;
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x40), lVar5 == 0)) goto LAB_0309f148;
      iVar2 = *(int *)(lVar5 + 0x18);
      FUN_01ba9478(&local_50,&local_38,*(undefined8 *)puVar4);
      lVar5 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      pcVar9 = (char *)thunk_FUN_01a59484(&local_50,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
      if (((int)local_38 < iVar2) && (*pcVar9 != '\0')) {
        return uVar10;
      }
    }
  }
  return 0;
}


