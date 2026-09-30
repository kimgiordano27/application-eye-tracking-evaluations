/*
FUNCTION_NAME: FUN_024c0058
ENTRY_POINT: 024c0058
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

ulong FUN_024c0058(long param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ushort local_50 [2];
  int local_4c;
  long local_48;
  
  uVar17 = (ulong)param_4;
  local_50[0] = (ushort)param_4;
  local_4c = param_3;
  local_48 = param_2;
  if ((DAT_03782744 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RC2CryptoServiceProvider__ctor__);
    DAT_03782744 = 1;
  }
  if (*(int *)(param_1 + 400) == 0) {
    return uVar17;
  }
  uVar14 = FUN_02689f60(param_1,0);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar3 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  if ((uVar14 & 1) == 0) {
    return uVar17;
  }
  switch(*(undefined4 *)(param_1 + 400)) {
  case 2:
  case 3:
    if (param_3 == 0) {
      if (param_2 == 0) goto LAB_024c0838;
      if (*(int *)(param_2 + 0x10) < 1) goto LAB_024c0130;
      sVar8 = FUN_015fa29c(param_2,0,0);
      bVar5 = sVar8 == 0x2d;
    }
    else {
LAB_024c0130:
      bVar5 = false;
    }
    iVar12 = *(int *)(param_1 + 0x22c);
    iVar13 = FUN_024bb50c(param_1);
    if (iVar13 + iVar12 == 0) {
      bVar6 = true;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x230);
      iVar13 = FUN_024bb50c(param_1);
      bVar6 = iVar13 + iVar12 == 0;
    }
    if (!bVar5) {
      if ((param_4 - 0x30 & 0xffff) < 10) {
        return uVar17;
      }
      if (((param_4 & 0xffff) == 0x2d) && (bVar6 || param_3 == 0)) {
        return 0x2d;
      }
      lVar16 = FUN_017dcb18(0);
      if (((lVar16 != 0) && (plVar15 = (long *)FUN_017dff94(lVar16,0), plVar15 != (long *)0x0)) &&
         (lVar16 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220)),
         lVar16 != 0)) {
        uVar19 = *(undefined8 *)(lVar16 + 0x38);
        if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
        }
        uVar10 = FUN_016fd358(uVar19,0);
        if ((uVar10 & 0xffff) != (param_4 & 0xffff)) {
          return 0;
        }
        if (*(int *)(param_1 + 400) != 3) {
          return 0;
        }
        if (param_2 != 0) {
          uVar17 = FUN_0160472c(param_2,uVar19,0);
          uVar10 = 0;
          if ((uVar17 & 1) == 0) {
            uVar10 = param_4;
          }
          return (ulong)uVar10;
        }
      }
LAB_024c0838:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    break;
  case 4:
    if ((param_4 - 0x41 & 0xffff) < 0x1a) {
      return uVar17;
    }
    if ((param_4 - 0x61 & 0xffff) < 0x1a) {
      return uVar17;
    }
  case 1:
    if (0x2f < (param_4 & 0xffff)) {
      if (0x39 < (param_4 & 0xffff)) {
        param_4 = 0;
      }
      return (ulong)param_4;
    }
    break;
  case 5:
    if (param_2 != 0) {
      iVar12 = *(int *)(param_2 + 0x10) + -1;
      if (*(int *)(param_2 + 0x10) < 1) {
        sVar8 = 10;
        uVar11 = 0x20;
        uVar10 = 0x20;
      }
      else {
        iVar13 = param_3 + -1;
        if (iVar13 <= iVar12) {
          iVar12 = iVar13;
        }
        iVar2 = 0;
        if (-1 < iVar13) {
          iVar2 = iVar12;
        }
        uVar10 = FUN_015fa29c(param_2,iVar2,0);
        iVar12 = *(int *)(param_2 + 0x10) + -1;
        if (*(int *)(param_2 + 0x10) < 1) {
          sVar8 = 10;
          uVar11 = 0x20;
        }
        else {
          if (param_3 <= iVar12) {
            iVar12 = param_3;
          }
          iVar13 = 0;
          if (-1 < param_3) {
            iVar13 = iVar12;
          }
          uVar11 = FUN_015fa29c(param_2,iVar13,0);
          iVar12 = *(int *)(param_2 + 0x10) + -1;
          if (*(int *)(param_2 + 0x10) < 1) {
            sVar8 = 10;
          }
          else {
            if (param_3 + 1 <= iVar12) {
              iVar12 = param_3 + 1;
            }
            iVar13 = 0;
            if (-1 < param_3 + 1) {
              iVar13 = iVar12;
            }
            sVar8 = FUN_015fa29c(param_2,iVar13,0);
          }
        }
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f9104(uVar17,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bVar7 = FUN_016f92d4(uVar17,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((bVar7 & param_3 == 0) == 0) {
          uVar14 = FUN_016f92d4(uVar17,0);
          if (((uVar14 & 1) == 0) || (((uVar10 & 0xffff) != 0x2d && ((uVar10 & 0xffff) != 0x20)))) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_016f9218(uVar17,0);
            if (((((uVar10 & 0xffff) != 0x2d) && ((uVar10 & 0xffff) != 0x27)) &&
                ((uVar10 & 0xffff) != 0x20)) && ((0 < param_3 && ((uVar14 & 1) != 0)))) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_016f92d4(uVar10,0);
              if ((uVar14 & 1) == 0) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_016f9724(uVar17,0);
                return uVar17;
              }
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_016f9218(uVar17,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_016f9218(uVar11,0);
              if ((uVar14 & 1) != 0) {
                return 0;
              }
              return uVar17;
            }
            return uVar17;
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
        }
        uVar17 = FUN_016f95a8(uVar17,0);
        return uVar17;
      }
      if ((((sVar8 != 0x27) && ((uVar11 & 0xffff) != 0x27)) && ((uVar11 & 0xffff) != 0x20)) &&
         (((param_4 & 0xffff) == 0x27 &&
          (uVar14 = FUN_0160472c(param_2,*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                 ,0), (uVar14 & 1) == 0)))) {
        return 0x27;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f9104(uVar10,0);
      if ((((uVar11 & 0xffff) != 0x2d) && ((uVar14 & 1) != 0)) && ((param_4 & 0xffff) == 0x2d)) {
        return uVar17;
      }
      if ((uVar10 & 0xffff) == 0x27) {
        return 0;
      }
      if ((uVar10 & 0xffff) == 0x20) {
        return 0;
      }
      if (param_3 == 0) {
        return 0;
      }
      if ((param_4 & 0xffff) == 0x20 || (param_4 & 0xffff) == 0x2d) {
        if ((uVar10 & 0xffff) == 0x2d) {
          return 0;
        }
        if ((uVar11 & 0xffff) == 0x20) {
          return 0;
        }
        if ((uVar11 & 0xffff) == 0x27) {
          return 0;
        }
        if ((uVar11 & 0xffff) != 0x2d) {
          if ((sVar8 == 0x27) != (sVar8 != 0x20)) {
            uVar10 = 0;
            if (sVar8 != 0x2d) {
              uVar10 = param_4;
            }
            return (ulong)uVar10;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
    goto LAB_024c0838;
  case 6:
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_016e8b00(local_50,0);
    uVar18 = *(undefined8 *)(param_1 + 0x198);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    uVar17 = FUN_0201fbe8(uVar19,uVar18,0);
    uVar10 = (uint)local_50[0];
    if ((uVar17 & 1) == 0) {
      uVar10 = 0;
    }
    return (ulong)uVar10;
  case 7:
    if ((param_4 - 0x30 & 0xffff) < 10) {
      return uVar17;
    }
    if ((param_4 - 0x41 & 0xffff) < 0x1a) {
      return uVar17;
    }
    if ((param_4 - 0x61 & 0xffff) < 0x1a) {
      return uVar17;
    }
    if ((param_4 & 0xffff) == 0x40) {
      if (param_2 == 0) goto LAB_024c0838;
      iVar12 = FUN_016047a8(param_2,0x40,0);
      if (iVar12 == -1) {
        return 0x40;
      }
    }
    if (*(long *)Method_System_Security_Cryptography_RC2CryptoServiceProvider__ctor__ == 0)
    goto LAB_024c0838;
    iVar12 = FUN_016047a8(*(long *)
                           Method_System_Security_Cryptography_RC2CryptoServiceProvider__ctor__,
                          uVar17,0);
    if (iVar12 != -1) {
      return uVar17;
    }
    if ((param_4 & 0xffff) == 0x2e) {
      if (param_2 == 0) goto LAB_024c0838;
      iVar12 = *(int *)(param_2 + 0x10) + -1;
      if (*(int *)(param_2 + 0x10) < 1) {
        return 0x2e;
      }
      if (param_3 <= iVar12) {
        iVar12 = param_3;
      }
      iVar13 = 0;
      if (-1 < param_3) {
        iVar13 = iVar12;
      }
      sVar8 = FUN_015fa29c(param_2,iVar13,0);
      iVar12 = *(int *)(param_2 + 0x10) + -1;
      if (*(int *)(param_2 + 0x10) < 1) {
        sVar9 = 10;
      }
      else {
        if (param_3 + 1 <= iVar12) {
          iVar12 = param_3 + 1;
        }
        iVar13 = 0;
        if (-1 < param_3 + 1) {
          iVar13 = iVar12;
        }
        sVar9 = FUN_015fa29c(param_2,iVar13,0);
      }
      if (sVar8 != 0x2e) {
        uVar10 = 0;
        if (sVar9 != 0x2e) {
          uVar10 = 0x2e;
        }
        return (ulong)uVar10;
      }
    }
    break;
  case 8:
    uVar19 = *(undefined8 *)(param_1 + 0x2d8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_02681b9c(uVar19,0,0);
    if ((uVar14 & 1) != 0) {
      plVar15 = *(long **)(param_1 + 0x2d8);
      if (plVar15 != (long *)0x0) {
        uVar17 = (**(code **)(*plVar15 + 0x178))
                           (plVar15,&local_48,&local_4c,uVar17,*(undefined8 *)(*plVar15 + 0x180));
        piVar1 = (int *)(param_1 + 0x22c);
        *(long *)(param_1 + 0x218) = local_48;
        *(int *)(param_1 + 0x22c) = local_4c;
        if (local_4c < 0) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          return uVar17 & 0xffffffff;
        }
        if (local_48 != 0) {
          iVar12 = *(int *)(local_48 + 0x10);
          if (iVar12 < local_4c) {
            *piVar1 = iVar12;
            iVar12 = *(int *)(local_48 + 0x10);
          }
          if (local_4c <= iVar12) {
            iVar12 = local_4c;
          }
          *(int *)(param_1 + 0x230) = iVar12;
          return uVar17 & 0xffffffff;
        }
      }
      goto LAB_024c0838;
    }
  }
  return 0;
}


