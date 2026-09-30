/*
FUNCTION_NAME: FUN_027695c4
ENTRY_POINT: 027695c4
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


/* WARNING: Removing unreachable block (ram,0x02769a68) */

void FUN_027695c4(long *param_1,long param_2)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int local_44;
  
  if ((DAT_048303b2 & 1) == 0) {
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
    DAT_048303b2 = 1;
  }
  local_44 = 0;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  plVar7 = (long *)thunk_FUN_01f116d0(param_1,lVar12);
  puVar2 = Method_Sirenix_Serialization_DefaultSerializationBinder_BindToName__;
  if (plVar7 == (long *)0x0) {
    if (param_1 == (long *)0x0) goto LAB_02769a60;
    FUN_032be218(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  }
  else {
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_DefaultSerializationBinder_BindToType__
                               );
    FUN_030f2380(lVar12,*(undefined8 *)puVar2);
    if ((lVar12 == 0) ||
       (lVar8 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                          (lVar12,*(undefined8 *)
                                   Method_System_Net_Configuration_DefaultProxySection_get_Properties__
                          ), param_1 == (long *)0x0)) goto LAB_02769a60;
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
          uVar9 = FUN_02443d9c(param_1,uVar9,*(undefined8 *)(lVar8 + 0x18));
        }
        else {
          lVar8 = *(long *)(lVar8 + 8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_027697a0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_027697a0:
          uVar11 = (*(code *)*puVar10)(plVar7,puVar10[1]);
          uVar9 = FUN_02444234(param_1,uVar9,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
        }
        lVar8 = *(long *)(lVar12 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_02769a60;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
  lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_02e6c748(uVar9,param_1,*(undefined8 *)(lVar12 + 0x50),*(undefined8 *)(lVar12 + 0x60));
  lVar12 = FUN_02444b9c(param_1,*(undefined8 *)puVar2,uVar9,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68));
  if (lVar12 != 0) {
    lVar12 = FUN_03fe3c18(lVar12,0);
    param_1[0x14] = lVar12;
    thunk_FUN_01f51358(param_1 + 0x14,lVar12);
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
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto System_Collections_Generic_Dictionary_ValueCollection<object,_object>___ctor;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
System_Collections_Generic_Dictionary_ValueCollection<object,_object>___ctor:
        uVar14 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar14 & 1) == 0) goto LAB_027699e4;
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_027699c0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_027699c0:
        uVar9 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        thunk_FUN_03fe9acc(param_1,uVar9,param_1[0x14],0);
      } while( true );
    }
  }
LAB_02769a60:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_027699e4:
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02769a38;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02769a38:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}


