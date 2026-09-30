/*
FUNCTION_NAME: FUN_0795a090
ENTRY_POINT: 0795a090
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0795a090(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
                    /* try { // try from 0795a098 to 07a5a09f has its CatchHandler @ 0795a164 */
                    /* try { // try from 0795a0a4 to 07a5a0af has its CatchHandler @ 0795a160 */
  if ((DAT_08987ee2 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084889e0);
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(Unity_Services_Vivox_AudioInputDevices_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_AttributeData_TypeInfo);
    FUN_03a8a718(PTR_DAT_084950f0);
    FUN_03a8a718(UnityEngine_AudioListener_TypeInfo);
    FUN_03a8a718(UnityEngine_Audio_AudioMixer_TypeInfo);
    FUN_03a8a718(UnityEngine_Timeline_AudioMixerProperties_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848a1e8);
    FUN_03a8a718(PTR_DAT_084950f8);
    FUN_03a8a718(Unity_Services_Vivox_AudioOutputDevices_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Native_AudioOutputStream_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_AudioFadeModel_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Native_AudioOutputStreamClosed_TypeInfo);
    DAT_08987ee2 = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x18);
  plVar9 = (long *)*puVar8;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084889e0);
    FUN_05d37494(uVar3,param_1,
                 *(undefined8 *)Normal_Realtime_Native_AudioOutputStreamClosed_TypeInfo,0);
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_Timeline_AudioMixerProperties_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x1a) * 0x10 + 0x138);
          goto LAB_0795a204;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)UnityEngine_Timeline_AudioMixerProperties_TypeInfo,0x1a);
LAB_0795a204:
    (*(code *)*puVar4)(plVar10,uVar3,puVar4[1]);
    plVar9 = *(long **)(param_1 + 0x10);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
    FUN_066b5934(uVar3,param_1,*(undefined8 *)Unity_Services_Vivox_AudioOutputDevices_TypeInfo,0);
    if (plVar9 == (long *)0x0) goto LAB_0795a5e4;
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0848a1e8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0795a2a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_0848a1e8,3);
LAB_0795a2a0:
    (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
    plVar9 = (long *)*puVar8;
    if (plVar9 == (long *)0x0) goto LAB_0795a590;
  }
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084950f8);
  FUN_06f6877c(uVar3,param_1,*(undefined8 *)Unity_Services_Vivox_AudioFadeModel_TypeInfo,0);
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084950f0) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0795a33c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084950f0,1);
LAB_0795a33c:
  (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
  puVar2 = UnityEngine_AudioListener_TypeInfo;
  plVar9 = (long *)*puVar8;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_AudioListener_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0795a3ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)UnityEngine_AudioListener_TypeInfo,1);
LAB_0795a3ac:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar1 = System_Runtime_Serialization_AttributeData_TypeInfo;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_Runtime_Serialization_AttributeData_TypeInfo
             ) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_0795a418;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_03ac43c4(plVar9,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,5);
LAB_0795a418:
      lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (lVar5 != 0) {
        plVar9 = (long *)*puVar8;
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__get_base_;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar2,1);
Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__get_base_:
          plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_0795a4e4;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar1,5);
LAB_0795a4e4:
            plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
            uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        Unity_Services_Vivox_AudioInputDevices_TypeInfo);
            FUN_06461b9c(uVar3,param_1,
                         *(undefined8 *)Normal_Realtime_Native_AudioOutputStream_TypeInfo,0);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_Audio_AudioMixer_TypeInfo) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                    goto LAB_0795a580;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_03ac43c4(plVar9,*(long *)UnityEngine_Audio_AudioMixer_TypeInfo,3);
LAB_0795a580:
              (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
              goto LAB_0795a590;
            }
          }
        }
        goto LAB_0795a5e4;
      }
    }
LAB_0795a590:
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x40),0);
    FUN_0795a6e4(param_1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03afed3c(puVar8,0);
    return;
  }
LAB_0795a5e4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


