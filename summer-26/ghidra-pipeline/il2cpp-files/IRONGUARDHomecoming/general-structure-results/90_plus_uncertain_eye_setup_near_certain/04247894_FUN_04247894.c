/*
FUNCTION_NAME: FUN_04247894
ENTRY_POINT: 04247894
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04247ad0) */

void FUN_04247894(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0484134b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a2f0);
    thunk_FUN_01efb3a4(PTR_DAT_0458dd68);
    DAT_0484134b = 1;
  }
  lStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((param_4 != 0) && (*(long *)(param_3 + 0x48) != 0)) {
    fVar12 = *(float *)(param_4 + 0xc0);
    fVar13 = *(float *)(param_4 + 0xc4);
    uVar11 = *(undefined4 *)(param_4 + 200);
    fVar10 = (float)FUN_042260f4(*(long *)(param_3 + 0x48),0);
    if (*(long *)(param_3 + 0x48) != 0) {
      FUN_042260f4(*(long *)(param_3 + 0x48),0);
      uVar1 = FUN_040ff91c(fVar12 - fVar10,fVar13 - param_2,uVar11,param_3,1,0);
      if (-1 < (int)uVar1) {
        lVar2 = FUN_040fe968(param_3,0);
        if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto LAB_04247ac4;
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar2 = lVar2 + (ulong)uVar1 * 0x30;
        uStack_78 = *(undefined8 *)(lVar2 + 0x28);
        local_80 = *(undefined8 *)(lVar2 + 0x20);
        lStack_68 = *(long *)(lVar2 + 0x38);
        local_70 = *(undefined8 *)(lVar2 + 0x30);
        uStack_58 = *(undefined8 *)(lVar2 + 0x48);
        local_60 = *(undefined8 *)(lVar2 + 0x40);
        if ((((int)local_80 != 0x26afb9) && (lStack_68 != 0)) && (0 < (int)uStack_78)) {
          uVar3 = FUN_040dc63c(&local_80,0);
          uVar4 = FUN_040fe968(param_3,0);
          uVar4 = FUN_040dc530(&local_80,uVar4,0);
          if (*(int *)(*(long *)PTR_DAT_0458dd68 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0458dd68);
          }
          plVar5 = (long *)FUN_04193ca4(param_4,uVar3,uVar4,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_041d4560(plVar5,*(undefined8 *)(param_3 + 0x48),0);
          plVar6 = *(long **)(param_3 + 0x48);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
          lVar2 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04247a98;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar5,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_04247a98:
          (*(code *)*puVar7)(plVar5,puVar7[1]);
        }
      }
      return;
    }
  }
LAB_04247ac4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


