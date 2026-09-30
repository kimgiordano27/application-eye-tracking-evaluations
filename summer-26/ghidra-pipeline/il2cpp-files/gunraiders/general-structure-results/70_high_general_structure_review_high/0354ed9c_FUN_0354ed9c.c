/*
FUNCTION_NAME: FUN_0354ed9c
ENTRY_POINT: 0354ed9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0354ed9c(long *param_1,long param_2,long param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_04537823 & 1) == 0) {
    FUN_01c5d288(Method_Unity_Collections_NativeArray<float>_Dispose__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_PushDataAsync__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    DAT_04537823 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if ((param_2 != 0) && (plVar7 = (long *)param_1[0x22], plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x178))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x180));
    if (((int)param_1[0x12] == 9) && (param_1[0x22] != 0)) {
      if (param_1[0x18] == 0) goto LAB_0354f0fc;
      FUN_0354ea84(param_1[0x18],param_2);
    }
  }
  if ((param_3 != 0) &&
     (iVar6 = FUN_0290c568(param_3,*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<float>_Dispose__),
     0 < iVar6)) {
    if (param_4 < 1) {
      lVar9 = FUN_0290c578(param_3,*(undefined8 *)
                                    Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__)
      ;
      if (lVar9 == 0) goto LAB_0354f0fc;
      FUN_02c5889c(&local_98,lVar9,
                   *(undefined8 *)Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
      puVar5 = Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__;
      puVar4 = System_Data_NameNode_var;
      puVar3 = PTR_DAT_0422fd80;
      puVar2 = PTR_DAT_0422fc38;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while (uVar10 = FUN_02a6048c(&local_80,*(undefined8 *)puVar5), plVar7 = local_70,
            (uVar10 & 1) != 0) {
        if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*local_70 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(local_70);
        }
        piVar11 = (int *)thunk_FUN_01c49834(local_70);
        iVar6 = *piVar11;
        if (iVar6 != 0) {
          plVar7 = (long *)FUN_035097bc(param_3,plVar7,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar7);
          }
          plVar12 = (long *)FUN_03509884(plVar7,0xff,0);
          if (plVar12 != (long *)0x0) {
            if (*plVar12 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar12);
            }
          }
          plVar13 = (long *)param_1[0x22];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,iVar6,0,*(undefined8 *)(*plVar13 + 0x1e0));
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)(**(code **)(*param_1 + 0x1f8))
                                        (param_1,plVar12,iVar6,0,plVar7,
                                         *(undefined8 *)(*param_1 + 0x200));
            plVar12 = (long *)param_1[0x22];
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            (**(code **)(*plVar12 + 0x1c8))(plVar12,plVar13,*(undefined8 *)(*plVar12 + 0x1d0));
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
          }
          (**(code **)(*plVar13 + 0x178))(plVar13,plVar7,*(undefined8 *)(*plVar13 + 0x180));
        }
      }
      FUN_02a60488(&local_80,
                   *(undefined8 *)
                    Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
    }
    else {
      plVar7 = (long *)param_1[0x22];
      if (plVar7 == (long *)0x0) {
LAB_0354f0fc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1d8))
                                 (plVar7,param_4,0,*(undefined8 *)(*plVar7 + 0x1e0));
      if (plVar7 != (long *)0x0) {
        uVar8 = FUN_0354f1ac(plVar7,param_3,param_4);
        (**(code **)(*plVar7 + 0x178))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x180));
        if (param_1[0x18] == 0) goto LAB_0354f0fc;
        FUN_0354e234(param_1[0x18],plVar7,uVar8);
      }
    }
  }
  return;
}


