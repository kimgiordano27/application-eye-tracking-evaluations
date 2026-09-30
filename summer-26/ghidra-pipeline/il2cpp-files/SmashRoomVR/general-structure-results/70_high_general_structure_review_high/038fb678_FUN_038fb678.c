/*
FUNCTION_NAME: FUN_038fb678
ENTRY_POINT: 038fb678
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_038fb678(long param_1,int param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,undefined4 param_8,byte param_9,
                 undefined4 param_10,undefined8 param_11,int param_12,undefined8 param_13)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03ff9e70 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13666);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff9e70 = 1;
  }
  uVar2 = FUN_039257e0(0);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar4 = thunk_FUN_01afaadc();
    puVar3 = PTR_DAT_03daaaf8;
  }
  else {
    uVar2 = FUN_03925b90(0);
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(param_1,0,0);
      if ((uVar2 & 1) == 0) {
        if (-1 < param_2) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (DAT_03ffa430 == (code *)0x0) {
            DAT_03ffa430 = (code *)FUN_01b47f04("UnityEngine.Mesh::get_subMeshCount()");
          }
          iVar1 = (*DAT_03ffa430)(param_1);
          if (param_2 < iVar1) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_03922f24(param_3,0,0);
            if ((uVar2 & 1) == 0) {
              if (param_5 != 0) {
                if (param_12 != 2) {
LAB_038fb7c8:
                  local_70 = param_4[2];
                  uStack_78 = param_4[1];
                  local_80 = *param_4;
                  if (*(int *)(*(long *)StringLiteral_13666 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  local_90 = local_70;
                  uStack_98 = uStack_78;
                  local_a0 = local_80;
                  FUN_038fad38(param_1,param_2,param_3,&local_a0,param_5,param_6,param_7,param_8,
                               param_9 & 1,param_10,param_11,param_12,param_13);
                  return;
                }
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar2 = FUN_03922f24(param_13,0,0);
                if ((uVar2 & 1) == 0) goto LAB_038fb7c8;
                thunk_FUN_01ad9084(
                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                                  );
                uVar4 = thunk_FUN_01afaadc();
                uVar5 = thunk_FUN_01ad9084(PTR_DAT_03daaad0);
                uVar6 = thunk_FUN_01ad9084(PTR_DAT_03daaad8);
                FUN_02fd1298(uVar4,uVar5,uVar6,0);
                goto LAB_038fb978;
              }
              thunk_FUN_01ad9084(StringLiteral_2191);
              uVar4 = thunk_FUN_01afaadc();
              puVar3 = PTR_DAT_03daab08;
            }
            else {
              thunk_FUN_01ad9084(StringLiteral_2191);
              uVar4 = thunk_FUN_01afaadc();
              puVar3 = PTR_DAT_03d83aa8;
            }
            goto LAB_038fb964;
          }
        }
        thunk_FUN_01ad9084(StringLiteral_2200);
        uVar4 = thunk_FUN_01afaadc();
        uVar5 = thunk_FUN_01ad9084(PTR_DAT_03daaae8);
        uVar6 = thunk_FUN_01ad9084(PTR_DAT_03daaaf0);
        FUN_02fd4a78(uVar4,uVar5,uVar6,0);
      }
      else {
        thunk_FUN_01ad9084(StringLiteral_2191);
        uVar4 = thunk_FUN_01afaadc();
        puVar3 = PTR_DAT_03d83a18;
LAB_038fb964:
        uVar5 = thunk_FUN_01ad9084(puVar3);
        FUN_02fd1220(uVar4,uVar5,0);
      }
      goto LAB_038fb978;
    }
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar4 = thunk_FUN_01afaadc();
    puVar3 = PTR_DAT_03daab00;
  }
  uVar5 = thunk_FUN_01ad9084(puVar3);
  FUN_030406c4(uVar4,uVar5,0);
LAB_038fb978:
  uVar5 = thunk_FUN_01ad9084(PTR_DAT_03daab10);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar4,uVar5);
}


