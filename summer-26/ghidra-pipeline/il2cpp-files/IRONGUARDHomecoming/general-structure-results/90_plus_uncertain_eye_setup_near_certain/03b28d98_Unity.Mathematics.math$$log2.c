/*
FUNCTION_NAME: Unity.Mathematics.math$$log2
ENTRY_POINT: 03b28d98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03b29018) */

void Unity_Mathematics_math__log2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined *puVar7;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xaa8));
  thunk_FUN_01efb3a4(StringLiteral_11739);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x21 + 0x3be) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_PlaneData>__;
  }
  else {
    if (unaff_x19 != (long *)0x0) {
      lVar8 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11738) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03b28e1c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03b28e1c:
      puVar7 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar4 = (long *)(*(code *)*puVar3)();
      puVar2 = StringLiteral_11739;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03b28e94;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03b28e94:
        uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar9 & 1) == 0) goto LAB_03b28f30;
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03b28ef0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03b28ef0:
        (*(code *)*puVar3)(&stack0x00000060,plVar4,puVar3[1]);
        memcpy(&stack0x000000b8,&stack0x00000060,0x58);
        memcpy(&stack0x00000008,&stack0x000000b8,0x58);
        FUN_03b2829c();
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = StringLiteral_11740;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar7);
  FUN_034efd20(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01efb3a4(StringLiteral_11742);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
LAB_03b28f30:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b28f84;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar7,0);
LAB_03b28f84:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


