/*
FUNCTION_NAME: FUN_0276a388
ENTRY_POINT: 0276a388
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0276a828) */

void FUN_0276a388(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int local_44;
  
  if ((DAT_048303b6 & 1) == 0) {
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
    DAT_048303b6 = 1;
  }
  local_44 = 0;
  lVar11 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  plVar7 = (long *)thunk_FUN_01f116d0(param_1,lVar11);
  puVar2 = Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__;
  if (plVar7 == (long *)0x0) {
    if (param_1 == (long *)0x0) goto LAB_0276a820;
    FUN_032bebb0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  }
  else {
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__
                               );
    FUN_030f2380(lVar11,*(undefined8 *)puVar2);
    if ((lVar11 == 0) ||
       (lVar8 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                          (lVar11,*(undefined8 *)
                                   Method_System_Net_Configuration_DefaultProxySection_get_Properties__
                          ), param_1 == (long *)0x0)) goto LAB_0276a820;
    param_1[0x13] = lVar8;
    thunk_FUN_01f51358();
    local_44 = 0;
    iVar5 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
    puVar2 = Method_System_Net_Configuration_DefaultProxySection_Reset__;
    if (0 < iVar5) {
      do {
        iVar5 = local_44;
        uVar9 = FUN_035683d0(&local_44,0);
        lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
        if (iVar5 == 0) {
          uVar9 = FUN_02443e9c(param_1,uVar9,*(undefined8 *)(lVar8 + 0x18));
        }
        else {
          lVar8 = *(long *)(lVar8 + 8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0276a564;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_0276a564:
          (*(code *)*puVar10)(plVar7,puVar10[1]);
          uVar9 = FUN_02444328(param_1,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
        }
        lVar8 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0276a820;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar11,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        iVar5 = local_44 + 1;
        local_44 = iVar5;
        iVar6 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
      } while (iVar5 < iVar6);
    }
  }
  puVar2 = Method_Sirenix_Serialization_DefaultSerializationBinder_ParseTypeName__;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar9 = thunk_FUN_01f117cc();
  lVar11 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_02e6cdf0(uVar9,param_1,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x60));
  lVar11 = FUN_02444db4(param_1,*(undefined8 *)puVar2,uVar9,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68));
  if (lVar11 != 0) {
    lVar11 = FUN_03fe3c18(lVar11,0);
    param_1[0x14] = lVar11;
    thunk_FUN_01f51358(param_1 + 0x14,lVar11);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (param_1[0x13] != 0) {
      plVar7 = (long *)FUN_0265d924(param_1[0x13],
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
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0276a724;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_0276a724:
        uVar13 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar13 & 1) == 0)
        goto 
        System_Collections_Generic_Dictionary_ValueCollection<object,_ResourceLocator>__System_Collections_Generic_ICollection<TValue>_Add
        ;
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0276a780;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0276a780:
        uVar9 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        thunk_FUN_03fe9acc(param_1,uVar9,param_1[0x14],0);
      } while( true );
    }
  }
LAB_0276a820:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();

  System_Collections_Generic_Dictionary_ValueCollection<object,_ResourceLocator>__System_Collections_Generic_ICollection<TValue>_Add
  :
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0276a7f8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_0276a7f8:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}


