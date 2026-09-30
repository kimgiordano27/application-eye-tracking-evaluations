/*
FUNCTION_NAME: UnityWebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext$$Close
ENTRY_POINT: 08810928
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_5;strong_file_logging_hits_2
*/


undefined8 UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext__Close(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar13;
  int unaff_w24;
  uint uVar14;
  long *plVar15;
  long *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  long *unaff_x28;
  
  do {
    lVar3 = unaff_x20;
    if (0 < param_1) {
      if (unaff_x20 == 0) goto LAB_08810bf4;
      iVar1 = FUN_087f0dc8(unaff_x22,0);
      lVar3 = FUN_04447c90(*unaff_x26,iVar1 + *(int *)(unaff_x20 + 0x18));
      FUN_07a612b4(unaff_x20,0,lVar3,0,*(undefined4 *)(unaff_x20 + 0x18),0);
      FUN_087f190c(unaff_x22,lVar3,*(undefined4 *)(unaff_x20 + 0x18),0);
    }
    do {
      unaff_w27 = unaff_w27 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
        if (lVar3 == 0) goto LAB_08810bf4;
        lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f314f0);
        FUN_0882a8ac(lVar4,*(undefined4 *)(lVar3 + 0x18),0);
        if ((int)*(ulong *)(lVar3 + 0x18) < 1) goto LAB_08810b04;
        uVar13 = 0;
        uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        goto LAB_088109d8;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27)
      goto 
      UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
      ;
      lVar4 = *(long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_08810bf4;
      uVar13 = FUN_07a58374(lVar4,0);
    } while ((uVar13 & 3) == 0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    unaff_x22 = FUN_0880ddcc(lVar4);
    if (unaff_x22 == 0) goto LAB_08810bf4;
    param_1 = FUN_087f0dc8(unaff_x22,0);
    unaff_x20 = lVar3;
  } while( true );
LAB_088109d8:
  do {
    if ((long)uVar13 < (long)unaff_w24) {
LAB_08810a7c:
      if (uVar10 <= uVar13)
      goto 
      UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
      ;
      plVar15 = (long *)(lVar3 + uVar13 * 8 + 0x20);
      plVar6 = (long *)*plVar15;
      if ((plVar6 == (long *)0x0) ||
         (uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
         lVar4 == 0)) goto LAB_08810bf4;
      uVar10 = FUN_0882b120(lVar4,uVar7,0);
      if ((uVar10 & 1) == 0) {
        if (*(uint *)(lVar3 + 0x18) <= uVar13) {

          UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
          :
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar6 = (long *)*plVar15;
        if (plVar6 == (long *)0x0) goto LAB_08810bf4;
        uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (*(uint *)(lVar3 + 0x18) <= uVar13)
        goto 
        UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
        ;
        FUN_0882abf0(lVar4,uVar7,*plVar15,0);
      }
    }
    else {
      uVar14 = 0;
      do {
        lVar5 = *unaff_x25;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar5 = *unaff_x25;
        }
        lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
        if (lVar11 == 0) goto LAB_08810bf4;
        if (*(int *)(lVar11 + 0x18) <= (int)uVar14) {
          uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
          goto LAB_08810a7c;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar11 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x80);
          if (lVar11 == 0) goto LAB_08810bf4;
        }
        if ((*(uint *)(lVar11 + 0x18) <= uVar14) || (*(uint *)(lVar3 + 0x18) <= uVar13))
        goto 
        UnityWebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__39__System_IDisposable_Dispose
        ;
        plVar6 = *(long **)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_08810bf4;
        uVar10 = (**(code **)(*plVar6 + 0x8f8))
                           (plVar6,*(undefined8 *)(lVar3 + uVar13 * 8 + 0x20),
                            *(undefined8 *)(*plVar6 + 0x900));
        uVar14 = uVar14 + 1;
      } while ((uVar10 & 1) == 0);
    }
    uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar13 = uVar13 + 1;
  } while ((long)uVar13 < (long)(int)*(uint *)(lVar3 + 0x18));
LAB_08810b04:
  if (lVar4 != 0) {
    uVar2 = FUN_0882a948(lVar4,0);
    uVar7 = FUN_04447c90(*unaff_x26,uVar2);
    plVar6 = (long *)FUN_0882b010(lVar4,0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f21a78) {
            puVar8 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_08810b90;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f21a78,0);
LAB_08810b90:
      (*(code *)*puVar8)(plVar6,uVar7,0,puVar8[1]);
      uVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4ba70);
      FUN_087f0c80(uVar9,uVar7,0);
      *unaff_x19 = uVar9;
      thunk_FUN_044bb4b4();
      return *unaff_x19;
    }
  }
LAB_08810bf4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


