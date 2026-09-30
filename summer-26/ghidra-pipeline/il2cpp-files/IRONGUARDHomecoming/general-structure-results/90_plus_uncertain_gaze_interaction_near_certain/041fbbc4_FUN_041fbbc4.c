/*
FUNCTION_NAME: FUN_041fbbc4
ENTRY_POINT: 041fbbc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041fbdac) */

void FUN_041fbbc4(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  
  if ((DAT_04841119 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045909d8);
    thunk_FUN_01efb3a4(PTR_DAT_045909e0);
    thunk_FUN_01efb3a4(PTR_DAT_045909e8);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_First<ONSPPropagationMaterial_Point>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045909f0);
    thunk_FUN_01efb3a4(PTR_DAT_045909f8);
    thunk_FUN_01efb3a4(PTR_DAT_04590a00);
    DAT_04841119 = 1;
  }
  puVar4 = PTR_DAT_045909e0;
  puVar3 = PTR_DAT_045909d8;
  puVar2 = Method_System_Linq_Enumerable_First<ONSPPropagationMaterial_Point>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03051ce8(&local_d8,param_2,*(undefined8 *)PTR_DAT_04590a00);
  uStack_a8 = uStack_d0;
  local_b0 = local_d8;
  local_98 = uStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  do {
    uVar7 = FUN_02c675c4(&local_b0,*(undefined8 *)puVar4);
    lVar10 = local_90;
    if ((uVar7 & 1) == 0) {
      FUN_02c675c0(&local_b0,*(undefined8 *)puVar3);
      return;
    }
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = local_a0 & 0xffffffff;
    uVar5 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar6 = local_98._4_4_;
    uVar15 = *(undefined4 *)(local_90 + 100);
    uVar13 = *(undefined4 *)(local_90 + 0x68);
    uVar14 = *(undefined4 *)(local_90 + 0x6c);
    uVar12 = *(undefined4 *)(local_90 + 0x70);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_041dc658(uVar7,uVar5,uVar16,uVar6,uVar15,uVar13,uVar14,uVar12,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined4 *)((long)plVar8 + 0xa4) = param_3;
    FUN_041d4560(plVar8,lVar10,0);
    FUN_041d97d0(lVar10,plVar8,0);
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_041fbd9c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_041fbd9c:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  } while( true );
}


