/*
FUNCTION_NAME: FUN_01bd7ee0
ENTRY_POINT: 01bd7ee0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01bd7ee0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  double dVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  
                    /* try { // try from 01bd7ef8 to 01cd7f2f has its CatchHandler @ 01bd7ef8
                       catch() { ... } // from try @ 01bd7ef8 with catch @ 01bd7ef8
                       catch() { ... } // from try @ 01bd7f38 with catch @ 01bd7ef8 */
  if ((DAT_03fed26c & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsync>b__14_0__);
                    /* try { // try from 01bd7f30 to 01cd7f37 has its CatchHandler @ 01bd7f7c */
                    /* try { // try from 01bd7f38 to 01cd7f8f has its CatchHandler @ 01bd7ef8 */
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsync>b__14_1__);
    DAT_03fed26c = 1;
  }
  FUN_01bd776c(param_5);
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_01bd83f0;
  if (*(char *)(*(long *)(param_5 + 0x30) + 0xd3) == '\0') {
    if (*(long *)(param_5 + 0x28) != 0) {
      uVar9 = FUN_03b36b54(*(long *)(param_5 + 0x28),0);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = FUN_0390670c(0);
      }
      else {
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_01bd83f0;
        lVar4 = FUN_03b36b54(*(long *)(param_5 + 0x28),0);
      }
      if (*(long *)(param_5 + 0x30) != 0) {
        uVar5 = FUN_0391b750(*(long *)(param_5 + 0x30),0);
        if ((uVar5 & 1) == 0) {
          if ((*(long *)(param_5 + 0x38) == 0) ||
             (lVar6 = FUN_038fe800(*(long *)(param_5 + 0x38),0), lVar6 == 0)) goto LAB_01bd83f0;
          FUN_038ff638(lVar6,lVar4,0);
          if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bd83f0;
          lVar4 = FUN_038fe800(*(long *)(param_5 + 0x38),0);
          lVar6 = *(long *)(param_5 + 0x30);
          if ((lVar6 == 0) || (lVar4 == 0)) goto LAB_01bd83f0;
          FUN_039006f8(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                       *(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),lVar4,
                       *(undefined8 *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsync>b__14_1__,0
                      );
          if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bd83f0;
          lVar4 = FUN_038fe800(*(long *)(param_5 + 0x38),0);
          lVar6 = *(long *)(param_5 + 0x30);
          if ((lVar6 == 0) || (lVar4 == 0)) goto LAB_01bd83f0;
          FUN_039006f8(*(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x3c),
                       *(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),lVar4,
                       *(undefined8 *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsync>b__14_0__,0
                      );
        }
        else {
          if ((*(long *)(param_5 + 0x30) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_5 + 0x30) + 0xf8), lVar6 == 0)) goto LAB_01bd83f0;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_01bd83f4:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = FUN_0391f968(uVar9,lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_5 + 0x30) == 0) goto LAB_01bd83f0;
            FUN_0391b78c(*(long *)(param_5 + 0x30),0,0);
            if ((*(long *)(param_5 + 0x30) == 0) ||
               (plVar7 = *(long **)(*(long *)(param_5 + 0x30) + 0xf8), plVar7 == (long *)0x0))
            goto LAB_01bd83f0;
            if ((lVar4 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bd83bc with catch @ 01bd83f8
                        */
              uVar9 = thunk_FUN_01b154cc();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bd8374 with catch @ 01bd83fc
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bd834c with catch @ 01bd8400
                        */
              FUN_01b48050(uVar9,0);
            }
            if ((int)plVar7[3] == 0) goto LAB_01bd83f4;
            plVar7[4] = lVar4;
            thunk_FUN_01b4f09c(plVar7 + 4,lVar4);
            if (*(long *)(param_5 + 0x30) == 0) goto LAB_01bd83f0;
            FUN_0391b78c(*(long *)(param_5 + 0x30),1,0);
          }
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          bVar3 = FUN_03b36c80(*(long *)(param_5 + 0x28),0);
          *(byte *)(param_5 + 0x40) = bVar3 & 1;
          if (*(long *)(param_5 + 0x28) != 0) {
            dVar10 = (double)FUN_03b36cbc(*(long *)(param_5 + 0x28),0);
            dVar1 = DAT_00b92718;
            lVar4 = -0x8000000000000000;
            if (dVar10 * DAT_00b92718 != INFINITY) {
              lVar4 = (long)(dVar10 * DAT_00b92718);
            }
            *(long *)(param_5 + 0x50) = lVar4;
            if (*(long *)(param_5 + 0x28) != 0) {
              dVar10 = (double)FUN_03b36dd4(*(long *)(param_5 + 0x28),0);
              lVar4 = -0x8000000000000000;
              if (dVar10 * dVar1 != INFINITY) {
                lVar4 = (long)(dVar10 * dVar1);
              }
              *(long *)(param_5 + 0x48) = lVar4;
              return;
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = FUN_038f1768(0);
    if ((lVar4 == 0) ||
       (lVar4 = FUN_0391c27c(lVar4,0),
       puVar2 = Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__, lVar4 == 0))
    goto LAB_01bd83f0;
                    /* catch() { ... } // from try @ 01bd7f30 with catch @ 01bd7f7c */
    uVar9 = FUN_039274a0(lVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01bd6240(uVar9,param_2,param_3,param_4,0);
    bVar3 = FUN_01bd5320(0);
    *(byte *)(param_5 + 0x40) = bVar3 & 1;
    uVar9 = FUN_01bd58a4(0);
    *(undefined8 *)(param_5 + 0x50) = uVar9;
    uVar9 = FUN_01bd54f4(0);
    *(undefined8 *)(param_5 + 0x48) = uVar9;
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    if (*(char *)(param_5 + 0x40) != '\0') {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed2d7 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03fed2d7 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_01bd83f0;
      fVar8 = (float)FUN_032075fc(lVar4,0);
      if ((fVar8 == INFINITY) || ((int)fVar8 != 0x3c)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed2d7 == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
          DAT_03fed2d7 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_01bd83f0;
        uVar9 = 0x42700000;
        goto LAB_01bd81e4;
      }
      if (*(char *)(param_5 + 0x40) != '\0') {
        return;
      }
    }
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed2d7 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03fed2d7 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 != 0) {
      fVar8 = (float)FUN_032075fc(lVar4,0);
      if ((fVar8 != INFINITY) && ((int)fVar8 == 0x48)) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed2d7 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03fed2d7 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar9 = 0x42900000;
LAB_01bd81e4:
        FUN_0321780c(uVar9,lVar4,0);
        return;
      }
    }
  }
LAB_01bd83f0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


