/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<SerializationNode>$$Contains
ENTRY_POINT: 0256a360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__Contains(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  int iVar11;
  long unaff_x23;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    uVar10 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar7 = thunk_FUN_01ef6ec0(uVar10,*(undefined8 *)*unaff_x21);
    if ((uVar7 & 1) == 0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar2 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    iVar11 = 8;
  }
  else {
    iVar11 = 7;
  }
  uVar10 = *unaff_x21;
  __cxa_end_catch();
  if (iVar11 == 8) {
    plVar4 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0xa0);
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),uVar10,*(undefined8 *)(lVar6 + 0x28));
    }
    FUN_01bc5068(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,0);
    while (pcVar3 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                        -0x20) +
                                                                              0x20) + 0xc0) + 0x80)
                                               + 0x100), *pcVar3 == '\0') {
      pcVar3 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                   -0x20) + 0x20) +
                                                               0xc0) + 0x80) + 0x100);
      if (*pcVar3 == '\0') {
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x29 + -0x18));
        FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                              0x80) + 0xe0,0);
        goto LAB_0256a054;
      }
      puVar2 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar4 = (long *)*puVar2;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0256a0d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0256a0d4:
      uVar1 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      FUN_01bc5068(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x100,uVar1 & 1);
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar4 = (long *)*puVar2;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          lVar6 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_01ecb238(plVar4,lVar6,0);
System_Collections_ObjectModel_ReadOnlyCollection<SerializationNode>__get_Count:
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar4,unaff_x29 + -0x10);
    FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x20);
    uVar9 = 1;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
  }
  else {
    if (iVar11 == 7) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x18));
    }
LAB_0256a054:
    uVar9 = 0;
  }
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


