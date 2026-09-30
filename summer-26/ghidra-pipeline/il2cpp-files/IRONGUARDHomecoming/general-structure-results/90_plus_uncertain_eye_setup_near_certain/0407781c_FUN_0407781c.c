/*
FUNCTION_NAME: FUN_0407781c
ENTRY_POINT: 0407781c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04077a50) */
/* WARNING: Removing unreachable block (ram,0x04077a60) */

void FUN_0407781c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0483e582 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045873b8);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetMethodImpl__);
    DAT_0483e582 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar4 = FUN_035d3824(0);
  if (lVar4 == 0) {
LAB_04077a4c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = FUN_035d3880(lVar4,0);
  if (iVar1 == iVar3) {
    if (param_2 == 0) goto LAB_04077a4c;
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Reflection_SignatureType_GetMethodImpl__);
    FUN_035cc970(plVar5,0,0);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    local_74[0] = '\0';
    FUN_035ce230(uVar11,local_74,0);
    lVar4 = *(long *)(param_1 + 0x18);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_04077b80(&local_90,param_2,param_3,plVar5);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_60 = local_80;
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)PTR_DAT_045873b8;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar7 + 0x30) = local_80;
      *(undefined8 *)(lVar7 + 0x28) = uStack_88;
      *(undefined8 *)(lVar7 + 0x20) = local_90;
      thunk_FUN_01f51358(lVar7 + 0x20,0);
    }
    else {
      uStack_48 = uStack_88;
      local_50 = local_90;
      local_40 = local_80;
      FUN_0327632c(lVar4,&local_50,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (local_74[0] != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar11,0);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04077a28;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04077a28:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


