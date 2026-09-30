/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Deserialize
ENTRY_POINT: 03392e74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x033932f8) */
/* WARNING: Removing unreachable block (ram,0x03392efc) */
/* WARNING: Removing unreachable block (ram,0x0339338c) */
/* WARNING: Removing unreachable block (ram,0x03393398) */

void System_Runtime_Serialization_Formatters_Binary_ObjectReader__Deserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint uVar9;
  uint unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000008;
  
code_r0x03392e74:
  FUN_033935a4();
  do {
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03392e04;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_03392e04:
    uVar7 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if ((uVar7 & 1) != 0) break;
    if (unaff_x22 != (long *)0x0) {
      lVar6 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03392ee4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x22,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03392ee4:
      (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    }
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w25) {
      uVar9 = unaff_w29 & 1;
      uVar7 = FUN_033c9034(0);
      if ((uVar7 & 1) == 0) goto LAB_033930dc;
      lVar6 = FUN_033c9094(0);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) goto LAB_03393380;
      plVar4 = (long *)FUN_033c9c10(*(long *)(lVar6 + 0x20),0);
      puVar2 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      goto LAB_03392f9c;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar4 = *(long **)(unaff_x21 + (long)(int)unaff_w25 * 8 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_03393380;
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03392d94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0);
LAB_03392d94:
    lVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar6 == 0) goto LAB_03393380;
    unaff_x22 = (long *)FUN_033c9c10(lVar6,0);
  } while( true );
  lVar6 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03392e60;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x28,0);
LAB_03392e60:
  (*(code *)*puVar3)(unaff_x22,puVar3[1]);
  unaff_w29 = 1;
  goto code_r0x03392e74;
LAB_03392f9c:
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03392fec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03392fec:
  uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  if ((uVar7 & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_033930dc;
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 == 0) goto LAB_033930b0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    goto LAB_03393098;
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03393048;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03393048:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  uVar9 = 1;
  FUN_033935a4();
  goto LAB_03392f9c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03393098:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 033930c4 to 034931e7 has its CatchHandler @ 033930c4
                       catch() { ... } // from try @ 033930c4 with catch @ 033930c4
                       catch() { ... } // from try @ 03393330 with catch @ 033930c4
                       catch() { ... } // from try @ 033933bc with catch @ 033930c4
                       catch() { ... } // from try @ 033933c4 with catch @ 033930c4
                       catch() { ... } // from try @ 0339346c with catch @ 033930c4 */
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033930cc;
    }
  }
LAB_033930b0:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033930cc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_033930dc:
  if (in_stack_00000008 == 0) {
    if (uVar9 == 0) {
      return;
    }
    goto LAB_03393380;
  }
  uVar7 = FUN_0340eec4(*(undefined8 *)(in_stack_00000008 + 0x40),0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(in_stack_00000008 + 0x18) == 0) goto LAB_03393380;
    FUN_02b6b2d0(*(long *)(in_stack_00000008 + 0x18),
                 *(undefined8 *)
                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJobList>__,
                 *(undefined8 *)(in_stack_00000008 + 0x40),
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
  }
  plVar4 = *(long **)(in_stack_00000008 + 0x30);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__)
        {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03393184;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__
                          ,0);
LAB_03393184:
    lVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar6 != 0) {
      plVar4 = (long *)FUN_033c9c10(lVar6,0);
      puVar2 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03393204;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 033931e8 to 0349320f has its CatchHandler @ 033933dc */
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03393204:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_033932ec;
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_033932c4;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_033932ac;
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03393260;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03393260:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar9 = 1;
        FUN_033935a4();
      } while( true );
    }
    goto LAB_03393380;
  }
  if (uVar9 == 0) {
    return;
  }
  goto LAB_03393304;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_033932ac:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033932e0;
    }
  }
LAB_033932c4:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033932e0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_033932ec:
  if (uVar9 == 0) {
    return;
  }
  if (in_stack_00000008 == 0) goto LAB_03393380;
LAB_03393304:
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *(long *)(in_stack_00000008 + 0x18);
    uVar5 = (**(code **)(*unaff_x20 + 0x168))();
    if (lVar6 != 0) {
      FUN_02b6b2d0(lVar6,*(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__,
                   uVar5,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
      return;
    }
  }
LAB_03393380:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


