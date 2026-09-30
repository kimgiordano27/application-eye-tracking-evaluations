/*
FUNCTION_NAME: FUN_05e37d9c
ENTRY_POINT: 05e37d9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3
*/


undefined8 FUN_05e37d9c(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_48;
  
  if ((DAT_06bc3f33 & 1) == 0) {
    FUN_02f08768(Method_System_IO_StreamWriter__ctor__);
    FUN_02f08768(Method_System_IO_StreamReader_ReadAsync__);
    FUN_02f08768(Method_System_IO_StreamReader_ReadSpan__);
    FUN_02f08768(Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__);
    FUN_02f08768(Method_System_Collections_Stack__ctor__);
    FUN_02f08768(Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__);
    FUN_02f08768(Method_System_Reflection_SignatureType_get_MetadataToken__);
    FUN_02f08768(Method_System_Text_StringBuilder__ctor__);
    FUN_02f08768(PTR_DAT_067c9df8);
    FUN_02f08768(Method_System_Text_StringBuilder__ctor__);
    FUN_02f08768(Method_System_Net_Sockets_Socket_get_Available__);
    FUN_02f08768(Method_System_Net_Sockets_Socket_ThrowIfBufferNull__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                );
    DAT_06bc3f33 = 1;
  }
  *param_3 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_05e38324;
  uVar5 = FUN_03761e88(*(long *)(param_1 + 0x228),param_2,
                       *(undefined8 *)Method_System_Reflection_SignatureType_get_MetadataToken__);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  iVar4 = FUN_05e32c74(param_1);
  puVar3 = Method_System_Collections_Stack__ctor__;
  if (iVar4 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)Method_System_Collections_Stack__ctor__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar4 = FUN_061912f4(param_2,0);
  if (iVar4 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      lVar6 = *(long *)puVar3;
      uVar11 = 0x2d;
LAB_05e37f18:
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar4 = FUN_061912f4(uVar11,0);
      if (iVar4 != 0) goto LAB_05e37f38;
    }
    else if (param_2 == 0xa0) {
      lVar6 = *(long *)puVar3;
      uVar11 = 0x20;
      goto LAB_05e37f18;
    }
    if (*(long *)(param_1 + 0x228) != 0) {
      FUN_03762954(*(long *)(param_1 + 0x228),param_2,
                   *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__);
      return 0;
    }
  }
  else {
LAB_05e37f38:
    if (*(long *)(param_1 + 0x128) != 0) {
      uVar5 = FUN_049b6b20(*(long *)(param_1 + 0x128),iVar4,
                           *(undefined8 *)Method_System_IO_StreamReader_ReadSpan__);
      if ((uVar5 & 1) == 0) {
        local_48 = 0;
        uVar8 = 8;
        if ((*(uint *)(param_1 + 0x164) & 4) != 0) {
          uVar8 = 10;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar5 = FUN_061914b8(iVar4,uVar8,&local_48,0);
        puVar3 = Method_System_Text_StringBuilder__ctor__;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        lVar6 = *(long *)(param_1 + 0x120);
        if (lVar6 != 0) {
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)Method_System_Text_StringBuilder__ctor__;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = local_48;
            }
            else {
              FUN_03abf904(lVar6,local_48,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x128) != 0) {
              FUN_049b692c(*(long *)(param_1 + 0x128),iVar4,local_48,
                           *(undefined8 *)Method_System_IO_StreamReader_ReadAsync__);
              uVar11 = local_48;
              uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                          Method_System_Net_Sockets_Socket_get_Available__);
              FUN_05e283d0(uVar7,param_2,param_1,uVar11);
              *param_3 = uVar7;
              lVar6 = *(long *)(param_1 + 0x130);
              if (lVar6 != 0) {
                lVar9 = *(long *)(lVar6 + 0x10);
                lVar10 = *(long *)Method_System_Text_StringBuilder__ctor__;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  }
                  else {
                    FUN_03abf904(lVar6,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (*(long *)(param_1 + 0x138) != 0) {
                    FUN_049b692c(*(long *)(param_1 + 0x138),param_2,*param_3,
                                 *(undefined8 *)Method_System_IO_StreamWriter__ctor__);
                    puVar2 = PTR_DAT_067c9df8;
                    lVar6 = *(long *)(param_1 + 0x1f0);
                    if (lVar6 != 0) {
                      lVar9 = *(long *)(lVar6 + 0x10);
                      lVar10 = *(long *)PTR_DAT_067c9df8;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                          *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar4;
                        }
                        else {
                          FUN_03b2bc60(lVar6,iVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar6 = *(long *)(param_1 + 0x1f8);
                        if (lVar6 != 0) {
                          lVar9 = *(long *)(lVar6 + 0x10);
                          lVar10 = *(long *)puVar2;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar9 != 0) {
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar4;
                            }
                            else {
                              FUN_03b2bc60(lVar6,iVar4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            if (*(char *)(param_1 + 0x155) != '\0') {
                              if (*(int *)(*(long *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                                          + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                              }
                              uVar5 = FUN_05e72b68(0);
                              if ((uVar5 & 1) != 0) {
                                FUN_05e37af4(param_1,iVar4);
                                if (*(int *)(*(long *)
                                              Method_System_Net_Sockets_Socket_ThrowIfBufferNull__ +
                                            0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                }
                                FUN_05e35188(param_1);
                              }
                            }
                            lVar6 = *(long *)(param_1 + 0x1e0);
                            if (lVar6 != 0) {
                              lVar9 = *(long *)(lVar6 + 0x10);
                              lVar10 = *(long *)puVar3;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar6 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = local_48;
                                  return 1;
                                }
                                FUN_03abf904(lVar6,local_48,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (*(long *)(param_1 + 0x128) != 0) {
        uVar11 = FUN_049b688c(*(long *)(param_1 + 0x128),iVar4,
                              *(undefined8 *)
                               Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__);
        uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Net_Sockets_Socket_get_Available__);
        FUN_05e283d0(uVar7,param_2,param_1,uVar11);
        *param_3 = uVar7;
        lVar6 = *(long *)(param_1 + 0x130);
        if (lVar6 != 0) {
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)Method_System_Text_StringBuilder__ctor__;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            }
            else {
              FUN_03abf904(lVar6,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x138) != 0) {
              FUN_049b692c(*(long *)(param_1 + 0x138),param_2,*param_3,
                           *(undefined8 *)Method_System_IO_StreamWriter__ctor__);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_05e38324:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


