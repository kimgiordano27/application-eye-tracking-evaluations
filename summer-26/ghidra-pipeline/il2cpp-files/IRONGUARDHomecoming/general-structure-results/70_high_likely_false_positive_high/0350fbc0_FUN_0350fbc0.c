/*
FUNCTION_NAME: FUN_0350fbc0
ENTRY_POINT: 0350fbc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


undefined8 FUN_0350fbc0(long param_1,uint param_2,uint *param_3,undefined4 *param_4,long *param_5)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  undefined4 local_68;
  char local_64 [4];
  
  puVar5 = Method_System_IO_CStreamReader_Read__;
                    /* try { // try from 0350fbdc to 0360fbdf has its CatchHandler @ 0350fc04 */
                    /* try { // try from 0350fbe0 to 0360fbe7 has its CatchHandler @ 0350f7f4 */
                    /* try { // try from 0350fbe8 to 0360fbeb has its CatchHandler @ 0350fbf4 */
                    /* catch() { ... } // from try @ 0350faec with catch @ 0350fbec
                       try { // try from 0350fbec to 0360fc2f has its CatchHandler @ 0350f7f4 */
                    /* catch() { ... } // from try @ 0350fa08 with catch @ 0350fbf0 */
                    /* catch() { ... } // from try @ 0350fbe8 with catch @ 0350fbf4 */
                    /* catch() { ... } // from try @ 0350f9f4 with catch @ 0350fbf8 */
                    /* catch() { ... } // from try @ 0350f9c8 with catch @ 0350fbfc */
                    /* catch() { ... } // from try @ 0350f96c with catch @ 0350fc00 */
  if ((DAT_04832fd9 & 1) == 0) {
                    /* catch() { ... } // from try @ 0350fbdc with catch @ 0350fc04 */
                    /* catch() { ... } // from try @ 0350f908 with catch @ 0350fc08 */
                    /* catch() { ... } // from try @ 0350fa84 with catch @ 0350fc0c */
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
                    /* catch() { ... } // from try @ 0350fa18 with catch @ 0350fc10 */
                    /* catch() { ... } // from try @ 0350fac0 with catch @ 0350fc14 */
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__);
    DAT_04832fd9 = 1;
  }
  local_64[0] = '\0';
  local_68 = 0;
  *param_3 = 0xb;
  *param_4 = 0;
  uVar6 = *(ushort *)((long)param_5 + 0x14);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_034fc34c(uVar6,0);
  if ((uVar8 & 1) != 0) {
    plVar12 = (long *)FUN_0350a594(param_1);
    if ((plVar12 == (long *)0x0) ||
       (plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0))
       , plVar12 == (long *)0x0)) goto LAB_03510150;
    uVar6 = (**(code **)(*plVar12 + 0x1a8))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x1b0));
    puVar5 = 
    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
    }
    if (DAT_04833019 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
      DAT_04833019 = '\x01';
    }
    lVar13 = *(long *)puVar5;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *(long *)puVar5;
    }
    puVar5 = Method_ftLightmaps_OnSceneChangedPlay__;
    if (**(char **)(lVar13 + 0xb8) == '\0') {
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((param_2 == 0xff) && ((ushort)(uVar6 - 0x590) < 0x70)) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_0350f6c8(param_5,local_64,param_4);
        if ((uVar14 & 1) != 0) {
          if (local_64[0] == '\0') {
            *param_3 = 0xc;
            return 1;
          }
          *param_3 = 0xb;
          return 0;
        }
      }
    }
  }
  if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ + 0xe0) ==
      0) {
    thunk_FUN_01ee6d7c();
  }
  iVar9 = FUN_035614b8(param_5,0);
  lVar13 = param_5[2];
  lVar20 = *(long *)(param_1 + 0x158);
  if ((lVar20 != 0) ||
     (lVar20 = Oculus_Interaction_FirstHoverInteractorGroup__get_HasSelectedInteractable(param_1),
     lVar20 != 0)) {
    uVar16 = (uint)uVar6 % 199;
    iVar22 = 199;
    do {
      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_03510154;
      lVar19 = *(long *)(lVar20 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar19 == 0) {
        return 0;
      }
      if (0 < (int)(*(uint *)(lVar19 + 0x18) & param_2)) {
        if (*(long *)(lVar19 + 0x10) == 0) break;
        iVar10 = *(int *)(*(long *)(lVar19 + 0x10) + 0x10);
        if (iVar10 <= iVar9 - (int)lVar13) {
          if ((uVar8 & 1) == 0) {
LAB_0350fea8:
            lVar15 = *(long *)(lVar19 + 0x10);
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x10) == 1) {
                if (*(uint *)(param_5 + 1) <= *(uint *)(param_5 + 2)) {
LAB_03510154:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                sVar2 = *(short *)(*param_5 + (long)(int)*(uint *)(param_5 + 2) * 2);
                sVar7 = FUN_03409f80(lVar15,0,0);
                if (sVar2 != sVar7) goto LAB_0350fee8;
              }
              else {
LAB_0350fee8:
                plVar12 = (long *)FUN_0350a594(param_1);
                if (plVar12 == (long *)0x0) break;
                lVar15 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
                if (*(long *)(lVar19 + 0x10) == 0) break;
                uVar11 = *(uint *)(*(long *)(lVar19 + 0x10) + 0x10);
                uVar3 = *(uint *)(param_5 + 2);
                lVar17 = *(long *)
                          Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
                ;
                if ((*(uint *)(param_5 + 1) < uVar3) || (*(uint *)(param_5 + 1) - uVar3 < uVar11)) {
                  FUN_0358adfc(0);
                }
                lVar18 = *param_5;
                if ((*(byte *)(*(long *)(lVar17 + 0x20) + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                if (lVar15 == 0) break;
                iVar10 = FUN_03506bcc(lVar15,lVar18 + (long)(int)uVar3 * 2,uVar11,
                                      *(undefined8 *)(lVar19 + 0x10),1);
                if (iVar10 != 0) goto LAB_0350ff74;
              }
              *param_3 = *(uint *)(lVar19 + 0x18) & param_2;
              *param_4 = *(undefined4 *)(lVar19 + 0x1c);
              if (*(long *)(lVar19 + 0x10) != 0) {
                iVar9 = *(int *)(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                                + 0xe0);
                uVar4 = *(undefined4 *)(*(long *)(lVar19 + 0x10) + 0x10);
                goto joined_r0x035100d0;
              }
            }
            break;
          }
          lVar15 = param_5[2];
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = (int)lVar15 + iVar10;
          iVar10 = FUN_035614b8(param_5,0);
          if ((int)uVar11 <= iVar10) {
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar10 = FUN_035614b8(param_5,0);
            if ((int)uVar11 < iVar10) {
              if (*(uint *)(param_5 + 1) <= uVar11) goto LAB_03510154;
              uVar1 = *(undefined2 *)(*param_5 + (long)(int)uVar11 * 2);
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_034fc34c(uVar1,0);
              if (((uVar14 & 1) != 0) &&
                 (uVar14 = FUN_0351c1ac(param_1,*(undefined8 *)(lVar19 + 0x10),uVar1,0),
                 (uVar14 & 1) == 0)) goto LAB_0350ff74;
            }
            goto LAB_0350fea8;
          }
LAB_0350ff74:
          iVar10 = *(int *)(lVar19 + 0x18);
          if (iVar10 == 5) {
            uVar11 = *(uint *)(param_1 + 0x144);
            if (uVar11 == 0xffffffff) {
              uVar11 = FUN_0350d5f8(param_1);
            }
            if ((uVar11 >> 2 & 1) == 0) {
              iVar10 = *(int *)(lVar19 + 0x18);
              goto LAB_0350ffa8;
            }
LAB_0350ffd4:
            local_68 = 0;
            uVar21 = *(undefined8 *)(lVar19 + 0x10);
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_03561ef8(param_5,uVar21,1,&local_68,0);
            if ((uVar14 & 1) != 0) {
              *param_3 = *(uint *)(lVar19 + 0x18) & param_2;
              *param_4 = *(undefined4 *)(lVar19 + 0x1c);
              iVar9 = *(int *)(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                              0xe0);
              uVar4 = local_68;
joined_r0x035100d0:
              if (iVar9 == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03561778(param_5,uVar4,0);
              return 1;
            }
          }
          else {
LAB_0350ffa8:
            if (iVar10 == 7) {
              uVar11 = *(uint *)(param_1 + 0x144);
              if (uVar11 == 0xffffffff) {
                uVar11 = FUN_0350d5f8(param_1);
              }
              if ((uVar11 >> 4 & 1) != 0) goto LAB_0350ffd4;
            }
          }
        }
      }
      uVar16 = uVar16 + (uint)uVar6 % 0xc5 + 1;
      if (0xc6 < (int)uVar16) {
        uVar16 = uVar16 - 199;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 == 0) {
        return 0;
      }
    } while( true );
  }
LAB_03510150:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


