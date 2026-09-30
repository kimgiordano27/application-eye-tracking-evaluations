/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 01617ccc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar2 = PTR_DAT_027b4d20;
  if ((DAT_0293bc13 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b4e30);
    thunk_FUN_01279b34(PTR_DAT_027b4e38);
    thunk_FUN_01279b34(PTR_DAT_027b4d20);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b4e10);
    thunk_FUN_01279b34(PTR_DAT_027b4e18);
    thunk_FUN_01279b34(PTR_DAT_027b4e20);
    thunk_FUN_01279b34(PTR_DAT_027b4e28);
    DAT_0293bc13 = 1;
  }
  local_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar5 = FUN_01f4aa70(0);
  if (lVar5 != 0) {
    FUN_015daee4(lVar5,param_1,&local_78,*(undefined8 *)PTR_DAT_027b4e38);
    if (local_78 == 0) {
      return;
    }
    uVar3 = FUN_01ebe91c(local_78,*(undefined8 *)PTR_DAT_027b4e28,0);
    puVar1 = PTR_DAT_027b32e0;
    if (local_78 != 0) {
      iVar4 = FUN_01ebe91c(local_78,*(undefined8 *)PTR_DAT_027b4e10,0);
      lVar5 = local_78;
      lVar7 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar7);
      }
      uVar9 = FUN_01f7d8a0(uVar9,0);
      if (lVar5 != 0) {
        lVar5 = FUN_01ebc848(lVar5,*(undefined8 *)PTR_DAT_027b4e18,uVar9,0);
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_0124baac(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,lVar7);
          }
        }
        *(long *)(param_1 + 0x30) = lVar6;
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0122e748(lVar7);
        }
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_0124baac(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,lVar7);
          }
        }
        thunk_FUN_01286abc((long *)(param_1 + 0x30),lVar6);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_01286abc((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          FUN_016176f8(param_1,iVar4,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar5 = local_78;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x120);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar9 = FUN_01f7d8a0(uVar9,0);
          if (lVar5 == 0) goto LAB_01618060;
          lVar5 = FUN_01ebc848(lVar5,*(undefined8 *)PTR_DAT_027b4e20,uVar9,0);
          lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0122e748(lVar7);
          }
          if (lVar5 == 0) {
            FUN_01f880b8(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          lVar6 = thunk_FUN_0124baac(lVar5,lVar7);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,lVar7);
          }
          if (0 < *(int *)(lVar6 + 0x18)) {
            uVar8 = 0;
            puVar10 = (undefined8 *)(lVar6 + 0x28);
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01230ca8();
              }
              local_60 = puVar10[2];
              uStack_68 = puVar10[1];
              local_70 = *puVar10;
              FUN_016177d8(param_1,*(undefined4 *)(puVar10 + -1),&local_70,2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                    0xc0) + 0xa8) + 0x20) + 0xc0) +
                            0x80));
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 4;
            } while ((long)uVar8 < (long)*(int *)(lVar6 + 0x18));
          }
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar5 = FUN_01f4aa70(0);
        if (lVar5 != 0) {
          FUN_015dac94(lVar5,param_1,*(undefined8 *)PTR_DAT_027b4e30);
          return;
        }
      }
    }
  }
LAB_01618060:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


