/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_add_session_t$$Dispose
ENTRY_POINT: 0795a324
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar8;
  
  puVar3 = (undefined8 *)FUN_03ac43c4();
  (*(code *)*puVar3)();
  puVar2 = UnityEngine_AudioListener_TypeInfo;
  plVar8 = (long *)*unaff_x20;
  if (plVar8 == (long *)0x0) {
LAB_0795a5e4:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_AudioListener_TypeInfo) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0795a3ac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)UnityEngine_AudioListener_TypeInfo,1);
LAB_0795a3ac:
  plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
  puVar1 = System_Runtime_Serialization_AttributeData_TypeInfo;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)System_Runtime_Serialization_AttributeData_TypeInfo)
        {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_0795a418;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,5);
LAB_0795a418:
    lVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (lVar5 != 0) {
      plVar8 = (long *)*unaff_x20;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__get_base_;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar2,1);
Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__get_base_:
        plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                goto LAB_0795a4e4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar1,5);
LAB_0795a4e4:
          plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
          uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Services_Vivox_AudioInputDevices_TypeInfo)
          ;
          FUN_06461b9c();
          if (plVar8 != (long *)0x0) {
            lVar5 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_Audio_AudioMixer_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                  goto LAB_0795a580;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_03ac43c4(plVar8,*(long *)UnityEngine_Audio_AudioMixer_TypeInfo,3);
LAB_0795a580:
            (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
            goto LAB_0795a590;
          }
        }
      }
      goto LAB_0795a5e4;
    }
  }
LAB_0795a590:
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x30),0);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x38),0);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x40),0);
  FUN_0795a6e4();
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  thunk_FUN_03afed3c();
  return;
}


