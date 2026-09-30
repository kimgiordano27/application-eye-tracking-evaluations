/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-StylePropertyValue>$$.ctor
ENTRY_POINT: 0276b244
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0276b620) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_StylePropertyValue>___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  plVar7 = (long *)thunk_FUN_01f116d0();
  puVar2 = Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__;
  if (plVar7 == (long *)0x0) {
    if (unaff_x19 == (long *)0x0) goto LAB_0276b618;
    FUN_032bf548();
  }
  else {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__
                              );
    FUN_030f2380(lVar8,*(undefined8 *)puVar2);
    if ((lVar8 == 0) ||
       (lVar9 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                          (lVar8,*(undefined8 *)
                                  Method_System_Net_Configuration_DefaultProxySection_get_Properties__
                          ), unaff_x19 == (long *)0x0)) goto LAB_0276b618;
    unaff_x19[0x13] = lVar9;
    thunk_FUN_01f51358();
    in_stack_00000008._4_4_ = 0;
    iVar5 = (**(code **)(*unaff_x19 + 0x618))();
    puVar2 = Method_System_Net_Configuration_DefaultProxySection_Reset__;
    if (0 < iVar5) {
      do {
        iVar5 = in_stack_00000008._4_4_;
        FUN_035683d0((long)&stack0x00000008 + 4,0);
        if (iVar5 == 0) {
          uVar11 = FUN_02443f9c();
        }
        else {
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0276b35c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_0276b35c:
          (*(code *)*puVar10)(plVar7,puVar10[1]);
          uVar11 = FUN_02444460();
        }
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_0276b618;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar8,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        iVar5 = in_stack_00000008._4_4_ + 1;
        in_stack_00000008._4_4_ = iVar5;
        iVar6 = (**(code **)(*unaff_x19 + 0x618))();
      } while (iVar5 < iVar6);
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_01ecaf44();
  }
  thunk_FUN_01f117cc();
  FUN_02e6d028();
  lVar8 = FUN_02444fcc();
  if (lVar8 != 0) {
    lVar8 = FUN_03fe3c18(lVar8,0);
    unaff_x19[0x14] = lVar8;
    thunk_FUN_01f51358(unaff_x19 + 0x14,lVar8);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (unaff_x19[0x13] != 0) {
      plVar7 = (long *)FUN_0265d924(unaff_x19[0x13],
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0276b51c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_0276b51c:
        uVar13 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar13 & 1) == 0) goto LAB_0276b59c;
        lVar8 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0276b578;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0276b578:
        (*(code *)*puVar10)(plVar7,puVar10[1]);
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
LAB_0276b618:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276b59c:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0276b5f0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_0276b5f0:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}


