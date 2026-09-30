/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 076c4148
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
               (long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char cStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  long *in_stack_00000058;
  
  uStack0000000000000040 = param_4;
  if ((DAT_0a522d7f & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2ac68);
    FUN_04447ba8(PTR_DAT_09f2ac70);
    FUN_04447ba8(PTR_DAT_09f2dcd8);
    FUN_04447ba8(PTR_DAT_09f2ad50);
    FUN_04447ba8(PTR_DAT_09f2ac98);
    FUN_04447ba8(PTR_DAT_09f2aca0);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09f2dce0);
    DAT_0a522d7f = 1;
  }
  in_stack_00000058 = (long *)0x0;
  in_stack_00000038 = 0;
  uStack0000000000000034 = 0;
  _cStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f2ac70) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076c4238;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(param_2,*(long *)PTR_DAT_09f2ac70,0);
LAB_076c4238:
    (*(code *)*puVar5)(param_2,param_3,&stack0x00000058,&stack0x00000038,&stack0x00000034,puVar5[1])
    ;
    if (in_stack_00000058 != (long *)0x0) {
      lVar6 = (**(code **)(*in_stack_00000058 + 0x178))
                        (in_stack_00000058,*(undefined8 *)(*in_stack_00000058 + 0x180));
      if (lVar6 != 0) {
        plVar10 = *(long **)(param_1 + 0x10);
        lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,1);
        if (lVar6 == 0) goto LAB_076c43d8;
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09f2dce0;
        thunk_FUN_044bb4b4();
        if (plVar10 == (long *)0x0) goto LAB_076c43d8;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f2ac68) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076c4304;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2ac68,0);
LAB_076c4304:
        (*(code *)*puVar5)(plVar10,0x2a,lVar6,puVar5[1]);
      }
      if (in_stack_00000058 != (long *)0x0) {
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_05ffa9b4(&stack0x00000008,(int)in_stack_00000058[5],4,1,*(undefined8 *)PTR_DAT_09f2dcd8)
        ;
        uVar3 = in_stack_00000038;
        *(undefined8 *)(param_1 + 0x20) = in_stack_00000010;
        *(undefined8 *)(param_1 + 0x18) = in_stack_00000008;
        if (in_stack_00000058 != (long *)0x0) {
          lVar6 = in_stack_00000058[4];
          uVar4 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
          FUN_076c4480(&stack0x00000018,param_1,uVar3,(int)lVar6,uVar4,uStack0000000000000034,
                       *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          puVar1 = PTR_DAT_09f2ad50;
          cVar2 = cStack0000000000000018;
          if (cStack0000000000000018 != '\0') {
            auVar11 = FUN_0613d160(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2aca0);
            FUN_060f5558(&stack0x00000040,0,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)puVar1);
          }
          return cVar2 != '\0';
        }
      }
    }
  }
LAB_076c43d8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


