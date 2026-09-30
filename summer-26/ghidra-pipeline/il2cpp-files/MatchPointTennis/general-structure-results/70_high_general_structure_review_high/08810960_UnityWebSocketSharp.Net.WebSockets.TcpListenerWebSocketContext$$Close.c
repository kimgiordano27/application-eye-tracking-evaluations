/*
FUNCTION_NAME: UnityWebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext$$Close
ENTRY_POINT: 08810960
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;strong_file_logging_hits_2
*/


undefined8 UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext__Close(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong in_x4;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar12;
  long unaff_x23;
  int unaff_w24;
  uint uVar13;
  long *plVar14;
  long *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  long *unaff_x28;
  
  while( true ) {
    FUN_07a612b4(param_1,0,unaff_x23,0,in_x4,0);
    FUN_087f190c(unaff_x22,unaff_x23,*(undefined4 *)(unaff_x20 + 0x18),0);
    do {
      do {
        unaff_w27 = unaff_w27 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
          if (unaff_x23 == 0) goto LAB_08810bf4;
          lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f314f0);
          FUN_0882a8ac(lVar3,*(undefined4 *)(unaff_x23 + 0x18),0);
          if ((int)*(ulong *)(unaff_x23 + 0x18) < 1) goto LAB_08810b04;
          uVar12 = 0;
          uVar9 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
          goto LAB_088109d8;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27)
        goto 
        UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
        ;
        lVar3 = *(long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_08810bf4;
        uVar12 = FUN_07a58374(lVar3,0);
      } while ((uVar12 & 3) == 0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      unaff_x22 = FUN_0880ddcc(lVar3);
      if (unaff_x22 == 0) goto LAB_08810bf4;
      iVar1 = FUN_087f0dc8(unaff_x22,0);
    } while (iVar1 < 1);
    if (unaff_x23 == 0) break;
    iVar1 = FUN_087f0dc8(unaff_x22,0);
    lVar3 = FUN_04447c90(*unaff_x26,iVar1 + *(int *)(unaff_x23 + 0x18));
    in_x4 = (ulong)*(uint *)(unaff_x23 + 0x18);
    param_1 = unaff_x23;
    unaff_x20 = unaff_x23;
    unaff_x23 = lVar3;
  }
  goto LAB_08810bf4;
LAB_088109d8:
  do {
    if ((long)uVar12 < (long)unaff_w24) {
LAB_08810a7c:
      if (uVar9 <= uVar12)
      goto 
      UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
      ;
      plVar14 = (long *)(unaff_x23 + uVar12 * 8 + 0x20);
      plVar5 = (long *)*plVar14;
      if ((plVar5 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
         lVar3 == 0)) goto LAB_08810bf4;
      uVar9 = FUN_0882b120(lVar3,uVar6,0);
      if ((uVar9 & 1) == 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12) {

          UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
          :
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar5 = (long *)*plVar14;
        if (plVar5 == (long *)0x0) goto LAB_08810bf4;
        uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (*(uint *)(unaff_x23 + 0x18) <= uVar12)
        goto 
        UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
        ;
        FUN_0882abf0(lVar3,uVar6,*plVar14,0);
      }
    }
    else {
      uVar13 = 0;
      do {
        lVar4 = *unaff_x25;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x25;
        }
        lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x80);
        if (lVar10 == 0) goto LAB_08810bf4;
        if (*(int *)(lVar10 + 0x18) <= (int)uVar13) {
          uVar9 = (ulong)*(uint *)(unaff_x23 + 0x18);
          goto LAB_08810a7c;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar10 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x80);
          if (lVar10 == 0) goto LAB_08810bf4;
        }
        if ((*(uint *)(lVar10 + 0x18) <= uVar13) || (*(uint *)(unaff_x23 + 0x18) <= uVar12))
        goto 
        UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
        ;
        plVar5 = *(long **)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_08810bf4;
        uVar9 = (**(code **)(*plVar5 + 0x8f8))
                          (plVar5,*(undefined8 *)(unaff_x23 + uVar12 * 8 + 0x20),
                           *(undefined8 *)(*plVar5 + 0x900));
        uVar13 = uVar13 + 1;
      } while ((uVar9 & 1) == 0);
    }
    uVar9 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar12 = uVar12 + 1;
  } while ((long)uVar12 < (long)(int)*(uint *)(unaff_x23 + 0x18));
LAB_08810b04:
  if (lVar3 != 0) {
    uVar2 = FUN_0882a948(lVar3,0);
    uVar6 = FUN_04447c90(*unaff_x26,uVar2);
    plVar5 = (long *)FUN_0882b010(lVar3,0);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f21a78) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_08810b90;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f21a78,0);
LAB_08810b90:
      (*(code *)*puVar7)(plVar5,uVar6,0,puVar7[1]);
      uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4ba70);
      FUN_087f0c80(uVar8,uVar6,0);
      *unaff_x19 = uVar8;
      thunk_FUN_044bb4b4();
      return *unaff_x19;
    }
  }
LAB_08810bf4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


