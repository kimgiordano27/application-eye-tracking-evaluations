/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$.ctor
ENTRY_POINT: 036d7e98
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

ulong Unity_VisualScripting_FullSerializer_fsTypeConverter___ctor(ulong param_1)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  ushort in_w3;
  long lVar14;
  uint unaff_w19;
  undefined8 uVar15;
  int unaff_w20;
  undefined8 uVar16;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ushort uStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  
  uStack0000000000000000 = in_w3;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(StringLiteral_2459);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_2__
                      );
    thunk_FUN_01ad9084(StringLiteral_2260);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5d8);
    *(undefined1 *)(unaff_x23 + 0x5f3) = 1;
  }
  if ((*(int *)(unaff_x22 + 0x198) == 0) || (uVar12 = FUN_0391b750(), (uVar12 & 1) == 0)) {
LAB_036d85e0:
    return (ulong)unaff_w19;
  }
  switch(*(undefined4 *)(unaff_x22 + 0x198)) {
  case 2:
  case 3:
    if (unaff_w20 == 0) {
      if (unaff_x21 == 0) goto LAB_036d8660;
      if (*(int *)(unaff_x21 + 0x10) < 1) goto LAB_036d7f34;
      sVar6 = FUN_02ee1ff0();
      bVar3 = sVar6 == 0x2d;
    }
    else {
LAB_036d7f34:
      bVar3 = false;
    }
    iVar10 = *(int *)(unaff_x22 + 0x234);
    iVar11 = FUN_036d3064();
    if (iVar11 + iVar10 == 0) {
      bVar4 = true;
    }
    else {
      iVar10 = *(int *)(unaff_x22 + 0x238);
      iVar11 = FUN_036d3064();
      bVar4 = iVar11 + iVar10 == 0;
    }
    if (!bVar3) {
      if ((unaff_w19 - 0x30 & 0xffff) < 10) {
        return (ulong)unaff_w19;
      }
      if (((unaff_w19 & 0xffff) == 0x2d) && (bVar4 || unaff_w20 == 0)) {
        return 0x2d;
      }
      lVar14 = FUN_030a8370(0);
      if (((lVar14 != 0) && (plVar13 = (long *)FUN_030ab998(lVar14,0), plVar13 != (long *)0x0)) &&
         (lVar14 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220)),
         lVar14 != 0)) {
        uVar16 = *(undefined8 *)(lVar14 + 0x38);
        if (*(int *)(*(long *)StringLiteral_2459 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)StringLiteral_2459);
        }
        uVar8 = FUN_02fe1bb4(uVar16,0);
        if ((uVar8 & 0xffff) != (unaff_w19 & 0xffff)) {
          return 0;
        }
        if (*(int *)(unaff_x22 + 0x198) != 3) {
          return 0;
        }
        if (unaff_x21 != 0) {
          uVar12 = FUN_02eeacd0();
          uVar8 = 0;
          if ((uVar12 & 1) == 0) {
            uVar8 = unaff_w19;
          }
          return (ulong)uVar8;
        }
      }
LAB_036d8660:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    break;
  case 4:
    if ((unaff_w19 - 0x41 & 0xffff) < 0x1a) goto LAB_036d85e0;
    if ((unaff_w19 - 0x61 & 0xffff) < 0x1a) {
      return (ulong)unaff_w19;
    }
  case 1:
    if (0x2f < (unaff_w19 & 0xffff)) {
      if (0x39 < (unaff_w19 & 0xffff)) {
        unaff_w19 = 0;
      }
      return (ulong)unaff_w19;
    }
    break;
  case 5:
    if (unaff_x21 != 0) {
      if (*(int *)(unaff_x21 + 0x10) < 1) {
        sVar6 = 10;
        uVar9 = 0x20;
        uVar8 = 0x20;
      }
      else {
        uVar8 = FUN_02ee1ff0();
        if (*(int *)(unaff_x21 + 0x10) < 1) {
          sVar6 = 10;
          uVar9 = 0x20;
        }
        else {
          uVar9 = FUN_02ee1ff0();
          if (*(int *)(unaff_x21 + 0x10) < 1) {
            sVar6 = 10;
          }
          else {
            sVar6 = FUN_02ee1ff0();
          }
        }
      }
      puVar2 = 
      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
      ;
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_02fdd818(unaff_w19,0);
      if ((uVar12 & 1) == 0) {
        if (((sVar6 != 0x27) && ((uVar9 & 0xffff) != 0x27)) &&
           (((uVar9 & 0xffff) != 0x20 &&
            (((unaff_w19 & 0xffff) == 0x27 && (uVar12 = FUN_02eeacd0(), (uVar12 & 1) == 0)))))) {
          return 0x27;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_02fdd818(uVar8,0);
        if ((((uVar9 & 0xffff) != 0x2d) && ((uVar12 & 1) != 0)) && ((unaff_w19 & 0xffff) == 0x2d)) {
          return (ulong)unaff_w19;
        }
        if ((uVar8 & 0xffff) == 0x27) {
          return 0;
        }
        if ((uVar8 & 0xffff) == 0x20) {
          return 0;
        }
        if (unaff_w20 == 0) {
          return 0;
        }
        if ((unaff_w19 & 0xffff) == 0x20 || (unaff_w19 & 0xffff) == 0x2d) {
          if ((uVar8 & 0xffff) == 0x2d) {
            return 0;
          }
          if ((uVar9 & 0xffff) == 0x20) {
            return 0;
          }
          if ((uVar9 & 0xffff) == 0x27) {
            return 0;
          }
          if ((uVar9 & 0xffff) != 0x2d) {
            if ((sVar6 == 0x27) != (sVar6 != 0x20)) {
              uVar8 = 0;
              if (sVar6 != 0x2d) {
                uVar8 = unaff_w19;
              }
              return (ulong)uVar8;
            }
            return 0;
          }
          return 0;
        }
        return 0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      bVar5 = FUN_02fdd9e8(unaff_w19,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if ((bVar5 & unaff_w20 == 0) == 0) {
        uVar12 = FUN_02fdd9e8(unaff_w19,0);
        if (((uVar12 & 1) == 0) || (((uVar8 & 0xffff) != 0x2d && ((uVar8 & 0xffff) != 0x20)))) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_02fdd92c(unaff_w19,0);
          if ((((uVar8 & 0xffff) != 0x2d) && ((uVar8 & 0xffff) != 0x27)) &&
             (((uVar8 & 0xffff) != 0x20 && ((0 < unaff_w20 && ((uVar12 & 1) != 0)))))) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar12 = FUN_02fdd9e8(uVar8,0);
            if ((uVar12 & 1) == 0) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar12 = FUN_02fdddc0(unaff_w19,0);
              return uVar12;
            }
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_02fdd92c(unaff_w19,0);
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar12 = FUN_02fdd92c(uVar9,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
          }
          goto LAB_036d85e0;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
      }
      uVar12 = FUN_02fddc48(unaff_w19,0);
      return uVar12;
    }
    goto LAB_036d8660;
  case 6:
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar16 = FUN_02fcd73c();
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1a0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_2__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_2__
                        );
    }
    uVar12 = FUN_0339a808(uVar16,uVar15,0);
    uVar8 = (uint)uStack0000000000000000;
    if ((uVar12 & 1) == 0) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  case 7:
    if ((((unaff_w19 - 0x30 & 0xffff) < 10) || ((unaff_w19 - 0x41 & 0xffff) < 0x1a)) ||
       ((unaff_w19 - 0x61 & 0xffff) < 0x1a)) goto LAB_036d85e0;
    if ((unaff_w19 & 0xffff) == 0x40) {
      if (unaff_x21 == 0) goto LAB_036d8660;
      iVar10 = FUN_02eead4c();
      if (iVar10 == -1) {
        return 0x40;
      }
    }
    if (*(long *)PTR_DAT_03d9d5d8 == 0) goto LAB_036d8660;
    iVar10 = FUN_02eead4c(*(long *)PTR_DAT_03d9d5d8,unaff_w19,0);
    if (iVar10 != -1) {
      return (ulong)unaff_w19;
    }
    if ((unaff_w19 & 0xffff) == 0x2e) {
      if (unaff_x21 == 0) goto LAB_036d8660;
      if (*(int *)(unaff_x21 + 0x10) < 1) {
        return 0x2e;
      }
      sVar6 = FUN_02ee1ff0();
      if (*(int *)(unaff_x21 + 0x10) < 1) {
        sVar7 = 10;
      }
      else {
        sVar7 = FUN_02ee1ff0();
      }
      if (sVar6 != 0x2e) {
        uVar8 = 0;
        if (sVar7 != 0x2e) {
          uVar8 = 0x2e;
        }
        return (ulong)uVar8;
      }
    }
    break;
  case 8:
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2e0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = FUN_0391f968(uVar16,0,0);
    if ((uVar12 & 1) != 0) {
      plVar13 = *(long **)(unaff_x22 + 0x2e0);
      if (plVar13 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar13 + 0x178))
                           (plVar13,&stack0x00000008,(long)&stack0x00000000 + 4,unaff_w19,
                            *(undefined8 *)(*plVar13 + 0x180));
        *(undefined8 *)(unaff_x22 + 0x220) = in_stack_00000008;
        thunk_FUN_01b4f09c((long *)(unaff_x22 + 0x220));
        piVar1 = (int *)(unaff_x22 + 0x234);
        *(int *)(unaff_x22 + 0x234) = iStack0000000000000004;
        if (iStack0000000000000004 < 0) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          return uVar12 & 0xffffffff;
        }
        lVar14 = *(long *)(unaff_x22 + 0x220);
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x10) < iStack0000000000000004) {
            *piVar1 = *(int *)(lVar14 + 0x10);
          }
          *(int *)(unaff_x22 + 0x238) = iStack0000000000000004;
          iVar10 = *(int *)(lVar14 + 0x10);
          if (iStack0000000000000004 <= *(int *)(lVar14 + 0x10)) {
            iVar10 = iStack0000000000000004;
          }
          *(int *)(unaff_x22 + 0x238) = iVar10;
          return uVar12 & 0xffffffff;
        }
      }
      goto LAB_036d8660;
    }
  }
  return 0;
}


