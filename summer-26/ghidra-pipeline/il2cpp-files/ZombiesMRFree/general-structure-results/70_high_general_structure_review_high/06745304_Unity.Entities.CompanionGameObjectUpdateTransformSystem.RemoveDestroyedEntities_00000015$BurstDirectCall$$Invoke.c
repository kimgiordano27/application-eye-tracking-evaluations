/*
FUNCTION_NAME: Unity.Entities.CompanionGameObjectUpdateTransformSystem.RemoveDestroyedEntities_00000015$BurstDirectCall$$Invoke
ENTRY_POINT: 06745304
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x067457c0) */
/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */

void Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_BurstDirectCall__Invoke
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long lVar8;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar9;
  ulong unaff_x26;
  long unaff_x27;
  int *piVar10;
  long unaff_x28;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  long in_stack_00000038;
  undefined8 in_stack_00000070;
  ulong in_stack_00000090;
  long in_stack_000000a0;
  long in_stack_000000b0;
  int in_stack_000000b8;
  ulong in_stack_000002c8;
  undefined8 in_stack_00000330;
  float fVar15;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined4 in_stack_00000360;
  undefined4 in_stack_00000364;
  undefined4 in_stack_00000368;
  int in_stack_000003ec;
  undefined4 in_stack_00000434;
  undefined4 in_stack_00000438;
  undefined4 in_stack_0000043c;
  undefined4 in_stack_00000440;
  int in_stack_0000046c;
  long in_stack_00000768;
  
  while( true ) {
                    /* catch() { ... } // from try @ 067452dc with catch @ 06745308 */
    FUN_06745af4();
                    /* try { // try from 06745318 to 0684531f has its CatchHandler @ 06745334 */
    uVar11 = FUN_0662c39c(0);
    if (unaff_x25 == 0) break;
                    /* try { // try from 06745320 to 0684532b has its CatchHandler @ 067451ac */
                    /* try { // try from 0674532c to 06845333 has its CatchHandler @ 06745334 */
    if ((ulong)*(uint *)(unaff_x25 + 0x18) <= unaff_x26 + unaff_x23) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06745318 with catch @ 06745334
                       catch(type#2 @ 00000000) { ... } // from try @ 0674532c with catch @ 06745334
                        */
    lVar8 = unaff_x25 + (unaff_x28 >> 0x20) * 0x10;
    *(undefined4 *)(lVar8 + 0x20) = uVar11;
    *(int *)(lVar8 + 0x24) = (int)param_2;
    *(int *)(lVar8 + 0x28) = (int)param_3;
    *(int *)(lVar8 + 0x2c) = (int)param_4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x28 = unaff_x28 + unaff_x27;
    puVar2 = (undefined8 *)
             Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
    puVar3 = (undefined8 *)PTR_DAT_06f8a030;
    if (in_stack_0000046c <= unaff_x23) {
      do {
        while( true ) {
          unaff_x24 = unaff_x24 + 1;
          unaff_w22 = unaff_w22 + 7;
          if (unaff_x24 == in_stack_000000b0) {
            if ((in_stack_00000090 & 0x100000000) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_068bdec0(*(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SceneReference>_TypeInfo,0);
            }
            FUN_03d32664(9,*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
            FUN_06668eb0(&stack0x00000140);
            FUN_069114d4(&stack0x000002b8,*(undefined8 *)(unaff_x19 + 8),0);
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            uVar6 = in_stack_000002c8;
            FUN_06914078();
            if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x50),
                         *(undefined8 *)PTR_DAT_06f8a040);
            while (uVar7 = FUN_054f5df0(&stack0x00000290,*puVar3), (uVar7 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x40),
                           in_stack_000002c8 & 0xffffffff,
                           *(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo);
              memcpy(&stack0x000003d0,&stack0x00000330,0x78);
              if (0 < in_stack_000003ec) {
                lVar8 = 0;
                piVar10 = (int *)&stack0x0000040c;
                uVar7 = uVar6;
                do {
                  iVar4 = *piVar10;
                  FUN_06900600(0);
                  uVar12 = FUN_06745af4();
                  iVar5 = FUN_06732974();
                  param_3 = FUN_0662c39c(uVar12,uVar7,param_3,param_4,0);
                  UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                            (in_stack_00000434,in_stack_00000438,in_stack_0000043c,in_stack_00000440
                             ,&stack0x00000330,
                             *(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
                  if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo +
                              0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar6 = (ulong)(uint)(float)((1 << (ulong)((iVar5 - iVar4) + 1U & 0x1f)) + -2);
                  param_4 = uVar7;
                  FUN_0669cb80();
                  lVar8 = lVar8 + 1;
                  piVar10 = piVar10 + 1;
                  uVar7 = uVar6;
                } while (lVar8 < in_stack_000003ec);
              }
            }
            FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
            if (*(int *)(*(long *)
                          Unity_Entities_TypeManager_SharedTypeIndex<SceneObjectWatcher>_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913368((float)(in_stack_00000070._4_4_ - in_stack_000000b8));
            FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 8),0);
            FUN_069168e8();
            FUN_06668eb4(&stack0x00000140,0);
            lVar8 = *(long *)(unaff_x19 + 0x50);
            if (lVar8 != 0) {
              *(undefined4 *)(lVar8 + 0x18) = 0;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (*(long *)(in_stack_00000038 + 0x28) != in_stack_00000768) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            goto LAB_06745790;
          }
          memmove(&stack0x00000148,(void *)(in_stack_000000a0 + unaff_x24 * 0x88),0x88);
          lVar8 = FUN_069234f0(&stack0x00000148,0);
          if (lVar8 == 0) goto LAB_06745790;
          uVar11 = FUN_068fc544(lVar8,0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06745790;
          uVar6 = FUN_05248ee0(*(long *)(unaff_x19 + 0x40),uVar11,&stack0x00000450,*puVar2);
          if ((uVar6 & 1) != 0) break;
LAB_06745368:
          in_stack_000000b8 = in_stack_000000b8 + 1;
        }
        uVar12 = FUN_06923448(&stack0x00000148,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
        }
        uVar6 = FUN_068fc830(uVar12,0);
        if ((uVar6 & 1) == 0) goto LAB_06745368;
        lVar8 = *(long *)(unaff_x19 + 0x60);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar15 = (float)((ulong)in_stack_00000338 >> 0x20);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar13 = (float)((ulong)in_stack_00000330 >> 0x20);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar14 = (float)((ulong)in_stack_00000340 >> 0x20);
        uVar11 = FUN_069235b8(&stack0x00000148,0);
        if (lVar8 == 0) goto LAB_06745790;
        uVar1 = (int)unaff_x24 - in_stack_000000b8;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_06745794;
        lVar9 = (long)(int)uVar1;
        lVar8 = lVar8 + lVar9 * 0x10;
        *(float *)(lVar8 + 0x20) = (float)in_stack_00000330 + fVar15;
        *(float *)(lVar8 + 0x24) = fVar13 + (float)in_stack_00000340;
        *(float *)(lVar8 + 0x28) = (float)in_stack_00000338 + fVar14;
        *(undefined4 *)(lVar8 + 0x2c) = uVar11;
        lVar8 = *(long *)(unaff_x19 + 0x68);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        iVar4 = FUN_069235c0(&stack0x00000148,0);
        if (lVar8 == 0) goto LAB_06745790;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_06745794;
        fVar13 = fVar13 - (float)in_stack_00000340;
        param_2 = (ulong)(uint)fVar13;
        fVar14 = (float)in_stack_00000338 - fVar14;
        param_3 = (ulong)(uint)fVar14;
        param_4 = (ulong)(uint)(float)iVar4;
        lVar8 = lVar8 + lVar9 * 0x10;
        *(float *)(lVar8 + 0x20) = (float)in_stack_00000330 - fVar15;
        *(float *)(lVar8 + 0x24) = fVar13;
        *(float *)(lVar8 + 0x28) = fVar14;
        *(float *)(lVar8 + 0x2c) = (float)iVar4;
        lVar8 = *(long *)(unaff_x19 + 0x70);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        uVar6 = FUN_069235c8(&stack0x00000148,0);
        iVar4 = -in_stack_0000046c;
        if ((uVar6 & 1) != 0) {
          iVar4 = in_stack_0000046c;
        }
        if (lVar8 == 0) goto LAB_06745790;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_06745794;
        lVar8 = lVar8 + lVar9 * 0x10;
        *(undefined4 *)(lVar8 + 0x20) = in_stack_00000360;
        *(undefined4 *)(lVar8 + 0x24) = in_stack_00000364;
        *(undefined4 *)(lVar8 + 0x28) = in_stack_00000368;
        *(float *)(lVar8 + 0x2c) = (float)iVar4;
        puVar2 = (undefined8 *)
                 Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
        puVar3 = (undefined8 *)PTR_DAT_06f8a030;
      } while (in_stack_0000046c < 1);
      unaff_x23 = 0;
      unaff_x26 = (ulong)(uint)(unaff_w22 + in_stack_000000b8 * -7);
      unaff_x28 = unaff_x26 << 0x20;
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x78);
  }
LAB_06745790:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


