/*
FUNCTION_NAME: FUN_061b96d4
ENTRY_POINT: 061b96d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void FUN_061b96d4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *puVar6;
  
  if ((DAT_0a51e2c6 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f29428);
    DAT_0a51e2c6 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar4 = thunk_FUN_0448520c();
    FUN_07996cc8(uVar4,param_3,0);
  }
  else {
    lVar1 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar1 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
    if (lVar1 == 0) {
Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__set_Value:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar2 = FUN_072ca3f8(lVar1,*param_1,param_1[1],*(undefined8 *)PTR_DAT_09f29428);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar1 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 == 0)
      goto Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__set_Value;
      lVar3 = *(long *)(param_4 + 0x20);
      uVar4 = *param_1;
      uVar5 = param_1[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      uVar2 = FUN_072ca3f8(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f0));
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_04481fb8();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_04481fb8();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar1 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_04481fb8();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_04481fb8();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
        if (lVar1 == 0)
        goto Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__set_Value;
        lVar3 = *(long *)(param_4 + 0x20);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
        }
        uVar2 = FUN_072ca3f8(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
        if ((uVar2 & 1) == 0) {
          lVar1 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_04481fb8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_04481fb8();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar1 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_04481fb8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_04481fb8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
          if (lVar1 == 0)
          goto Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__set_Value;
          lVar3 = *(long *)(param_4 + 0x20);
          uVar4 = *param_1;
          uVar5 = param_1[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_04481fb8();
          }
          uVar2 = FUN_072ca3f8(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a8));
          if ((uVar2 & 1) == 0) {
            return;
          }
          uStack_38 = param_1[1];
          local_40 = *param_1;
          uVar4 = thunk_FUN_044adef4(PTR_DAT_09f21c18);
          uVar4 = thunk_FUN_04484e3c(uVar4,&local_40);
          puVar6 = PTR_DAT_09f29458;
        }
        else {
          uStack_38 = param_1[1];
          local_40 = *param_1;
          uVar4 = thunk_FUN_044adef4(PTR_DAT_09f21c18);
          uVar4 = thunk_FUN_04484e3c(uVar4,&local_40);
          puVar6 = PTR_DAT_09f29450;
        }
      }
      else {
        uStack_38 = param_1[1];
        local_40 = *param_1;
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09f21c18);
        uVar4 = thunk_FUN_04484e3c(uVar4,&local_40);
        puVar6 = PTR_DAT_09f29440;
      }
    }
    else {
      uStack_38 = param_1[1];
      local_40 = *param_1;
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f21c18);
      uVar4 = thunk_FUN_04484e3c(uVar4,&local_40);
      puVar6 = PTR_DAT_09f29438;
    }
    uVar5 = thunk_FUN_044adef4(puVar6);
    uVar5 = FUN_078ab14c(uVar5,uVar4,0);
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar4 = thunk_FUN_0448520c();
    FUN_07a3e070(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar4,param_4);
}


