/*
FUNCTION_NAME: FUN_05cc1010
ENTRY_POINT: 05cc1010
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_3
*/


void FUN_05cc1010(long param_1,long param_2,long *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  if ((DAT_06bc331d & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
    FUN_02f08768(Method_GoalManager_CloseModal__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_InternalInitialization__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__);
    FUN_02f08768(Method_System_Data_DataTable_set_XmlText__);
    DAT_06bc331d = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  if (param_2 == 0) {
    puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_InternalInitialization__;
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_InternalInitialization__;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_060f245c(param_3,0,0);
    puVar5 = Method_GoalManager_CloseModal__;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)Method_GoalManager_CloseModal__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_05cbf8c4();
      if ((uVar9 & 1) != 0) {
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *(long *)puVar5;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if ((lVar10 != 0) && (plVar11 = *(long **)(param_2 + 0x18), plVar11 != (long *)0x0)) {
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
          uVar3 = *(undefined4 *)(lVar10 + 0x38);
          uVar15 = *(undefined8 *)(lVar10 + 0x20);
          uVar14 = *(undefined8 *)(lVar10 + 0x48);
          iVar6 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          plVar11 = *(long **)(param_2 + 0x18);
          if (plVar11 != (long *)0x0) {
            iVar7 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
            if (lVar10 != 0) {
              iVar1 = *(int *)(lVar10 + 0x40);
              iVar2 = *(int *)(lVar10 + 0x44);
              FUN_061308d4(&local_98,uVar13,
                           *(undefined8 *)Method_System_Data_DataTable_set_XmlText__,0);
              if ((param_3 == (long *)0x0) ||
                 (iVar8 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0))
                 , iVar8 != 5)) {
                if (param_1 != 0) {
                  FUN_06116800(param_1,uVar13,&local_98,0);
LAB_05cc12b4:
                  FUN_061308d4(&local_b0,uVar13,
                               *(undefined8 *)
                                Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__,0);
                  if ((param_4 & 1) == 0) {
                    FUN_06116ca4(param_1,uVar13,&local_b0,0);
                  }
                  else {
                    FUN_06116800();
                  }
                  puVar5 = Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__;
                  lVar10 = *(long *)Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar10 = *(long *)puVar5;
                  }
                  uVar4 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 4);
                  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c97a8);
                  }
                  FUN_0610d1c0(&local_d8,param_3,0);
                  uStack_f8 = uStack_d0;
                  local_100 = local_d8;
                  uStack_e8 = uStack_c0;
                  uStack_f0 = local_c8;
                  local_e0 = local_b8;
                  FUN_0611c880(param_1,uVar13,uVar3,uVar4,&local_100,0);
                  thunk_FUN_06110d6c(param_1,uVar13,uVar3,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),uVar15,0
                                    );
                  thunk_FUN_06110d6c(param_1,uVar13,uVar3,
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),uVar14
                                     ,0);
                  uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
                  FUN_05c9ac9c(&local_128,param_2,0);
                  uStack_148 = uStack_120;
                  local_150 = local_128;
                  uStack_138 = uStack_110;
                  uStack_140 = local_118;
                  local_130 = local_108;
                  FUN_0611c880(param_1,uVar13,uVar3,uVar4,&local_150,0);
                  FUN_06110088(1.0 / (float)(iVar1 * iVar6),1.0 / (float)(iVar2 * iVar7),
                               (float)iVar6,(float)iVar7,param_1,uVar13,
                               **(undefined4 **)(*(long *)puVar5 + 0xb8),0);
                  thunk_FUN_0611117c(param_1,uVar13,uVar3,iVar6,iVar7,1,0);
                  return;
                }
              }
              else if (param_1 != 0) {
                FUN_06116ca4(param_1,uVar13,&local_98,0);
                goto LAB_05cc12b4;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__;
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__;
      }
    }
    else {
      puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__;
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar12 = (undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__;
      }
    }
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(*puVar12,0);
  return;
}


