/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-TextureId>$$CopyTo
ENTRY_POINT: 0276b8d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0276be20) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_TextureId>__CopyTo(ulong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x25;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_DefaultProxySection_Reset__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_DefaultProxySection_get_Properties__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_DefaultSerializationBinder_ParseTypeName__);
    *(undefined1 *)(unaff_x21 + 0x3bc) = 1;
  }
  lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar11 = (undefined8 *)
            (&stack0x00000000 +
            -((ulong)*(uint *)(*(long *)(lVar12 + 0x28) + 0xfc) + 0xf & 0x1fffffff0));
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar12);
  }
  plVar8 = (long *)thunk_FUN_01f116d0();
  puVar3 = Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__;
  if (plVar8 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) goto LAB_0276be18;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48))();
  }
  else {
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__
                               );
    FUN_030f2380(lVar12,*(undefined8 *)puVar3);
    if ((lVar12 == 0) ||
       (System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                  (lVar12,*(undefined8 *)
                           Method_System_Net_Configuration_DefaultProxySection_get_Properties__),
       unaff_x20 == (long *)0x0)) goto LAB_0276be18;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10))();
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    iVar6 = (**(code **)(*unaff_x20 + 0x618))();
    puVar3 = Method_System_Net_Configuration_DefaultProxySection_Reset__;
    if (0 < iVar6) {
      do {
        iVar6 = *(int *)(unaff_x29 + -0x24);
        uVar9 = FUN_035683d0(unaff_x29 + -0x24,0);
        lVar13 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (iVar6 == 0) {
          uVar9 = (*(code *)**(undefined8 **)(lVar13 + 0x18))();
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)puVar3;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        }
        else {
          lVar13 = *(long *)(lVar13 + 8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          lVar14 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                lVar13 = lVar14 + (long)*piVar17 * 0x10 + 0x138;
                goto LAB_0276bad0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          lVar13 = FUN_01ecb238(plVar8,lVar13,0);
LAB_0276bad0:
          *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
          lVar13 = *(long *)(lVar13 + 8);
          (**(code **)(lVar13 + 0x10))
                    (*(undefined8 *)(lVar13 + 8),lVar13,plVar8,unaff_x29 + -0x20,puVar11);
          lVar13 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          puVar1 = *(undefined8 **)(lVar13 + 0x30);
          uVar10 = *puVar1;
          puVar15 = puVar11;
          if (-1 < *(int *)(*(long *)(lVar13 + 0x28) + 0x28)) {
            puVar15 = (undefined8 *)*puVar11;
          }
          *(undefined8 *)(unaff_x29 + -0x20) = uVar9;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar15;
          (*(code *)puVar1[2])(uVar10);
          uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)puVar3;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        }
        if (lVar13 == 0) goto LAB_0276be18;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = *(int *)(unaff_x29 + -0x24) + 1;
        *(int *)(unaff_x29 + -0x24) = iVar6;
        iVar7 = (**(code **)(*unaff_x20 + 0x618))();
      } while (iVar6 < iVar7);
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_01ecaf44();
  }
  thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
  lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68))();
  if (lVar12 != 0) {
    FUN_03fe3c18(lVar12,0);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70))();
    lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar12 != 0) {
      plVar8 = (long *)FUN_0265d924(lVar12,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0276bce8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0276bce8:
        uVar16 = (*(code *)*puVar11)(plVar8,puVar11[1]);
        if ((uVar16 & 1) == 0) goto LAB_0276bd84;
        lVar12 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0276bd44;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0276bd44:
        (*(code *)*puVar11)(plVar8,puVar11[1]);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))();
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
LAB_0276be18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276bd84:
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0276bdd8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0276bdd8:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


