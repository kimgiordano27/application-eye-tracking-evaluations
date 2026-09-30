/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-TextureId>$$GetEnumerator
ENTRY_POINT: 0276b8ac
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

void System_Collections_Generic_Dictionary_ValueCollection<object,_TextureId>__GetEnumerator
               (long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uStack_30;
  int iStack_24;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar3 = tpidr_el0;
  lStack_8 = *(long *)(lVar3 + 0x28);
  if ((DAT_048303bc & 1) == 0) {
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
    DAT_048303bc = 1;
  }
  lVar14 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  puVar12 = (undefined8 *)
            ((long)&uStack_30 -
            ((ulong)*(uint *)(*(long *)(lVar14 + 0x28) + 0xfc) + 0xf & 0x1fffffff0));
  iStack_24 = 0;
  lVar14 = *(long *)(lVar14 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
  }
  plVar9 = (long *)thunk_FUN_01f116d0(param_1,lVar14);
  puVar4 = Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__;
  if (plVar9 == (long *)0x0) {
    if (param_1 == (long *)0x0) goto LAB_0276be18;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48))(param_1);
  }
  else {
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__
                               );
    FUN_030f2380(lVar14,*(undefined8 *)puVar4);
    if ((lVar14 == 0) ||
       (uVar10 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                           (lVar14,*(undefined8 *)
                                    Method_System_Net_Configuration_DefaultProxySection_get_Properties__
                           ), param_1 == (long *)0x0)) goto LAB_0276be18;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10))(param_1,uVar10)
    ;
    iStack_24 = 0;
    iVar7 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
    puVar4 = Method_System_Net_Configuration_DefaultProxySection_Reset__;
    if (0 < iVar7) {
      do {
        iVar7 = iStack_24;
        puVar11 = (undefined8 *)FUN_035683d0(&iStack_24,0);
        lVar15 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
        if (iVar7 == 0) {
          uVar10 = (*(code *)**(undefined8 **)(lVar15 + 0x18))(param_1,puVar11);
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        }
        else {
          lVar15 = *(long *)(lVar15 + 8);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01ecaf44(lVar15);
          }
          lVar16 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                lVar15 = lVar16 + (long)*piVar18 * 0x10 + 0x138;
                goto LAB_0276bad0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          lVar15 = FUN_01ecb238(plVar9,lVar15,0);
LAB_0276bad0:
          lVar15 = *(long *)(lVar15 + 8);
          puStack_20 = puVar12;
          (**(code **)(lVar15 + 0x10))
                    (*(undefined8 *)(lVar15 + 8),lVar15,plVar9,&puStack_20,puVar12);
          lVar15 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
          puVar1 = *(undefined8 **)(lVar15 + 0x30);
          puStack_18 = puVar12;
          if (-1 < *(int *)(*(long *)(lVar15 + 0x28) + 0x28)) {
            puStack_18 = (undefined8 *)*puVar12;
          }
          puStack_20 = puVar11;
          (*(code *)puVar1[2])(*puVar1,puVar1,param_1,&puStack_20,&uStack_10);
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          uVar10 = uStack_10;
        }
        if (lVar15 == 0) goto LAB_0276be18;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar14,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        iVar7 = iStack_24 + 1;
        iStack_24 = iVar7;
        iVar8 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
      } while (iVar7 < iVar8);
    }
  }
  puVar4 = Method_Sirenix_Serialization_DefaultSerializationBinder_ParseTypeName__;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar10 = thunk_FUN_01f117cc();
  lVar14 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  (*(code *)**(undefined8 **)(lVar14 + 0x60))(uVar10,param_1,*(undefined8 *)(lVar14 + 0x50));
  lVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68))
                     (param_1,*(undefined8 *)puVar4,uVar10);
  if (lVar14 != 0) {
    uVar10 = FUN_03fe3c18(lVar14,0);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70))(param_1,uVar10)
    ;
    lVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78))
                       (param_1);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar14 != 0) {
      plVar9 = (long *)FUN_0265d924(lVar14,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar6 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0276bce8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_0276bce8:
        uVar17 = (*(code *)*puVar12)(plVar9,puVar12[1]);
        if ((uVar17 & 1) == 0) goto LAB_0276bd84;
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0276bd44;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar6,0);
LAB_0276bd44:
        uVar10 = (*(code *)*puVar12)(plVar9,puVar12[1]);
        uVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80))
                           (param_1);
        thunk_FUN_03fe9acc(param_1,uVar10,uVar13,0);
      } while( true );
    }
  }
LAB_0276be18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276bd84:
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0276bdd8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_0276bdd8:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  if (*(long *)(lVar3 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


