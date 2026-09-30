/*
FUNCTION_NAME: FUN_05e33940
ENTRY_POINT: 05e33940
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4
*/


undefined8 FUN_05e33940(long param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_58;
  
  if ((DAT_06bc3f32 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
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
    FUN_02f08768(Method_System_Text_StringBuilder__ctor__);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_System_Net_Sockets_Socket_get_Available__);
    FUN_02f08768(Method_System_Net_Sockets_Socket_ThrowIfBufferNull__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                );
    FUN_02f08768(Method_System_Text_StringBuilder_Append__);
    FUN_02f08768(Method_System_Text_StringBuilder_Append__);
    FUN_02f08768(Method_System_Text_StringBuilder_Append__);
    DAT_06bc3f32 = 1;
  }
  *param_3 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_05e342b4;
  uVar7 = FUN_03761e88(*(long *)(param_1 + 0x228),param_2,
                       *(undefined8 *)Method_System_Reflection_SignatureType_get_MetadataToken__);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  iVar5 = FUN_05e32c74(param_1);
  puVar4 = Method_System_Collections_Stack__ctor__;
  if (iVar5 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)Method_System_Collections_Stack__ctor__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar5 = FUN_061912f4(param_2,0);
  if (iVar5 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      lVar8 = *(long *)puVar4;
      uVar13 = 0x2d;
LAB_05e33b14:
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar5 = FUN_061912f4(uVar13,0);
      if (iVar5 != 0) goto LAB_05e33b34;
    }
    else if (param_2 == 0xa0) {
      lVar8 = *(long *)puVar4;
      uVar13 = 0x20;
      goto LAB_05e33b14;
    }
    if (*(long *)(param_1 + 0x228) != 0) {
      FUN_03762954(*(long *)(param_1 + 0x228),param_2,
                   *(undefined8 *)Method_System_Text_StringBuilder_AppendSpanFormattable<uint>__);
      return 0;
    }
    goto LAB_05e342b4;
  }
LAB_05e33b34:
  if (*(long *)(param_1 + 0x128) == 0) goto LAB_05e342b4;
  uVar7 = FUN_049b6b20(*(long *)(param_1 + 0x128),iVar5,
                       *(undefined8 *)Method_System_IO_StreamReader_ReadSpan__);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x128) != 0) {
      uVar13 = FUN_049b688c(*(long *)(param_1 + 0x128),iVar5,
                            *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_StateEvent_From__
                           );
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Net_Sockets_Socket_get_Available__);
      FUN_05e283d0(uVar9,param_2,param_1,uVar13);
      *param_3 = uVar9;
      lVar8 = *(long *)(param_1 + 0x130);
      if (lVar8 != 0) {
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)Method_System_Text_StringBuilder__ctor__;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uVar9;
          }
          else {
            FUN_03abf904(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x138) != 0) {
            FUN_049b692c(*(long *)(param_1 + 0x138),param_2,*param_3,
                         *(undefined8 *)Method_System_IO_StreamWriter__ctor__);
            return 1;
          }
        }
      }
    }
    goto LAB_05e342b4;
  }
  lVar8 = *(long *)(param_1 + 0x148);
  local_58 = 0;
  if (lVar8 == 0) goto LAB_05e342b4;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
  plVar10 = *(long **)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_05e342b4;
  uVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
  if ((uVar7 & 1) == 0) {
    lVar8 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
    if (lVar8 == 0) goto LAB_05e342b4;
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)Method_System_Text_StringBuilder_Append__;
      uVar13 = thunk_FUN_060f6130(param_1,0);
      if ((1 < *(uint *)(lVar8 + 0x18)) &&
         (*(undefined8 *)(lVar8 + 0x28) = uVar13, *(uint *)(lVar8 + 0x18) != 2)) {
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)Method_System_Text_StringBuilder_Append__;
        lVar11 = *(long *)(param_1 + 0x148);
        if (lVar11 == 0) goto LAB_05e342b4;
        if (*(uint *)(param_1 + 0x150) < *(uint *)(lVar11 + 0x18)) {
          lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
          if (lVar11 == 0) goto LAB_05e342b4;
          uVar13 = thunk_FUN_060f6130(lVar11,0);
          if ((3 < *(uint *)(lVar8 + 0x18)) &&
             (*(undefined8 *)(lVar8 + 0x38) = uVar13, *(uint *)(lVar8 + 0x18) != 4)) {
            *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)Method_System_Text_StringBuilder_Append__
            ;
            uVar13 = FUN_04f6fd20(lVar8,0);
            lVar8 = *(long *)(param_1 + 0x148);
            if (lVar8 == 0) goto LAB_05e342b4;
            if (*(uint *)(param_1 + 0x150) < *(uint *)(lVar8 + 0x18)) {
              uVar9 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_060aa024(uVar13,uVar9,0);
              return 0;
            }
          }
        }
      }
    }
    goto LAB_05e342b8;
  }
  lVar8 = *(long *)(param_1 + 0x148);
  if (lVar8 == 0) goto LAB_05e342b4;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
  plVar10 = *(long **)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_05e342b4;
  iVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  if (iVar6 < 2) {
LAB_05e33c94:
    lVar8 = *(long *)(param_1 + 0x148);
    if (lVar8 == 0) goto LAB_05e342b4;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (lVar8 == 0) goto LAB_05e342b4;
    FUN_060cf5ac(lVar8,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c),0);
    lVar8 = *(long *)(param_1 + 0x148);
    if (lVar8 == 0) goto LAB_05e342b4;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
    uVar13 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06194158(uVar13,0);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x148);
    if (lVar8 == 0) goto LAB_05e342b4;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
    plVar10 = *(long **)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_05e342b4;
    iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (iVar6 < 2) goto LAB_05e33c94;
  }
  lVar8 = *(long *)(param_1 + 0x148);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_05e342b8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x160);
    uVar13 = *(undefined8 *)(param_1 + 0x168);
    uVar9 = *(undefined8 *)(param_1 + 0x170);
    uVar2 = *(undefined4 *)(param_1 + 0x164);
    uVar14 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_0619167c(iVar5,uVar1,0,uVar9,uVar13,uVar2,uVar14,&local_58,0);
    if ((uVar7 & 1) == 0) {
      if (*(char *)(param_1 + 0x154) == '\0') {
        return 0;
      }
      if (*(long *)(param_1 + 0x168) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x168) + 0x18) < 1) {
          return 0;
        }
        FUN_05e37b78(param_1);
        lVar8 = *(long *)(param_1 + 0x148);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05e342b8;
          uVar1 = *(undefined4 *)(param_1 + 0x160);
          uVar13 = *(undefined8 *)(param_1 + 0x168);
          uVar9 = *(undefined8 *)(param_1 + 0x170);
          uVar2 = *(undefined4 *)(param_1 + 0x164);
          uVar14 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_0619167c(iVar5,uVar1,0,uVar9,uVar13,uVar2,uVar14,&local_58,0);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          if (local_58 != 0) {
            FUN_06190144(local_58,*(undefined4 *)(param_1 + 0x150),0);
            if (*(long *)(param_1 + 0x120) != 0) {
              FUN_02e441a0(*(long *)(param_1 + 0x120),local_58,
                           *(undefined8 *)Method_System_Text_StringBuilder__ctor__);
              if (*(long *)(param_1 + 0x128) != 0) {
                FUN_049b692c(*(long *)(param_1 + 0x128),iVar5,local_58,
                             *(undefined8 *)Method_System_IO_StreamReader_ReadAsync__);
                lVar8 = local_58;
                uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                             Method_System_Net_Sockets_Socket_get_Available__);
                FUN_05e283d0(uVar13,param_2,param_1,lVar8);
                *param_3 = uVar13;
                if (*(long *)(param_1 + 0x130) != 0) {
                  FUN_02e441a0(*(long *)(param_1 + 0x130),uVar13,
                               *(undefined8 *)Method_System_Text_StringBuilder__ctor__);
                  if (*(long *)(param_1 + 0x138) != 0) {
                    FUN_049b692c(*(long *)(param_1 + 0x138),param_2,*param_3,
                                 *(undefined8 *)Method_System_IO_StreamWriter__ctor__);
                    puVar4 = PTR_DAT_067c9df8;
                    if (*(long *)(param_1 + 0x1f0) != 0) {
                      FUN_02ec63ac(*(long *)(param_1 + 0x1f0),iVar5,*(undefined8 *)PTR_DAT_067c9df8)
                      ;
                      if (*(long *)(param_1 + 0x1f8) != 0) {
                        FUN_02ec63ac(*(long *)(param_1 + 0x1f8),iVar5,*(undefined8 *)puVar4);
LAB_05e34258:
                        if (*(char *)(param_1 + 0x155) != '\0') {
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                                      + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          uVar7 = FUN_05e72b68(0);
                          if ((uVar7 & 1) != 0) {
                            FUN_05e37af4(param_1,iVar5);
                            if (*(int *)(*(long *)
                                          Method_System_Net_Sockets_Socket_ThrowIfBufferNull__ +
                                        0xe4) == 0) {
                              thunk_FUN_02f6670c();
                            }
                            FUN_05e35188(param_1);
                          }
                        }
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
    else if (local_58 != 0) {
      FUN_06190144(local_58,*(undefined4 *)(param_1 + 0x150),0);
      lVar8 = *(long *)(param_1 + 0x120);
      if (lVar8 != 0) {
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)Method_System_Text_StringBuilder__ctor__;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
            *(long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = local_58;
          }
          else {
            FUN_03abf904(lVar8,local_58,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x128) != 0) {
            FUN_049b692c(*(long *)(param_1 + 0x128),iVar5,local_58,
                         *(undefined8 *)Method_System_IO_StreamReader_ReadAsync__);
            lVar8 = local_58;
            uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_System_Net_Sockets_Socket_get_Available__);
            FUN_05e283d0(uVar13,param_2,param_1,lVar8);
            *param_3 = uVar13;
            lVar8 = *(long *)(param_1 + 0x130);
            if (lVar8 != 0) {
              lVar11 = *(long *)(lVar8 + 0x10);
              lVar12 = *(long *)Method_System_Text_StringBuilder__ctor__;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar3 = *(uint *)(lVar8 + 0x18);
                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                  *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
                }
                else {
                  FUN_03abf904(lVar8,uVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_1 + 0x138) != 0) {
                  FUN_049b692c(*(long *)(param_1 + 0x138),param_2,*param_3,
                               *(undefined8 *)Method_System_IO_StreamWriter__ctor__);
                  puVar4 = PTR_DAT_067c9df8;
                  lVar8 = *(long *)(param_1 + 0x1f0);
                  if (lVar8 != 0) {
                    lVar11 = *(long *)(lVar8 + 0x10);
                    lVar12 = *(long *)PTR_DAT_067c9df8;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar3 = *(uint *)(lVar8 + 0x18);
                      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                        *(int *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = iVar5;
                      }
                      else {
                        FUN_03b2bc60(lVar8,iVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar8 = *(long *)(param_1 + 0x1f8);
                      if (lVar8 != 0) {
                        lVar11 = *(long *)(lVar8 + 0x10);
                        lVar12 = *(long *)puVar4;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar11 != 0) {
                          uVar3 = *(uint *)(lVar8 + 0x18);
                          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                            *(int *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = iVar5;
                          }
                          else {
                            FUN_03b2bc60(lVar8,iVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          goto LAB_05e34258;
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
LAB_05e342b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


